#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

#define MAX_NODES 10
#define INF 9999

int graph[MAX_NODES][MAX_NODES];
int n;

void drawGrid(int x, int y, int cellSize) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x1 = x + j * cellSize;
            int y1 = y + i * cellSize;
            int x2 = x1 + cellSize;
            int y2 = y1 + cellSize;
            rectangle(x1, y1, x2, y2);
        }
    }
}

void drawEdges(int x, int y, int cellSize) {
    int mid = cellSize / 2;
    setcolor(BLUE);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (graph[i][j] != INF) {
                int x1 = x + i * cellSize + mid;
                int y1 = y + j * cellSize + mid;
                int x2 = x + j * cellSize + mid;
                int y2 = y + i * cellSize + mid;
                line(x1, y1, x2, y2);
            }
        }
    }
}

void drawPath(int x, int y, int cellSize, int* path, int pathLength) {
    int mid = cellSize / 2;
    setcolor(RED);
    for (int i = 0; i < pathLength - 1; i++) {
        int x1 = x + path[i] * cellSize + mid;
        int y1 = y + path[i + 1] * cellSize + mid;
        int x2 = x + path[i + 1] * cellSize + mid;
        int y2 = y + path[i] * cellSize + mid;
        line(x1, y1, x2, y2);
    }
}

int dijkstra(int start, int end, int* path) {
    int dist[MAX_NODES];
    int visited[MAX_NODES] = {0};

    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        path[i] = -1;
    }

    dist[start] = 0;
    for (int count = 0; count < n - 1; count++) {
        int minDist = INF;
        int u;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && dist[v] < minDist) {
                minDist = dist[v];
                u = v;
            }
        }

        visited[u] = 1;
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                path[v] = u;
            }
        }
    }

    return dist[end];
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    printf("Enter the number of nodes (max 10): ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix (enter INF for no edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int start, end;
    printf("Enter the start node (0-%d): ", n - 1);
    scanf("%d", &start);
    printf("Enter the end node (0-%d): ", n - 1);
    scanf("%d", &end);

    int path[MAX_NODES];
    int pathLength = dijkstra(start, end, path);

    if (pathLength == INF) {
        printf("No path found!\n");
    } else {
        printf("Shortest path from node %d to node %d: ", start, end);
        for (int i = 0; i < pathLength; i++) {
            printf("%d ", path[i]);
        }
        printf("%d\n", end);

        int cellSize = 40;
        int startX = 50;
        int startY = 50;

        drawGrid(startX, startY, cellSize);
        drawEdges(startX, startY, cellSize);
        drawPath(startX, startY, cellSize, path, pathLength + 1);
    }

    delay(5000);
    closegraph();
    return 0;
}
