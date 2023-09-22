#include <iostream>
#include <list>
#include <stack>
#include <unordered_map>
using namespace std;
class graph {
public:
  unordered_map<int, list<int>> adj_list;

  void add_edges(int src, int dstii, bool dis) {
    adj_list[src].push_back(dstii);
    if (dis == 0) {
      adj_list[dstii].push_back(src);
    }
  }

  void print_edges() {
    for (auto node : adj_list) {
      cout << node.first << "->";
      for (auto nbr : node.second) {
        cout << nbr << ",";
      }
      cout << endl;
    }
  }
};
int main() {
  graph gr;
  gr.add_edges(5,0,1);
  gr.add_edges(4,0,1);
  gr.add_edges(5,2,1);
  gr.add_edges(2,3,1);
  gr.add_edges(3,1,1);
  gr.add_edges(4,1,1);
  gr.print_edges();
}
