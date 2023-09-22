#include <iostream>
#include <vector>
#include <algorithm>

// Abstract Strategy class
class SortingStrategy {
public:
    virtual void sort(std::vector<int>& data) = 0;
};

// Concrete Strategy classes
class BubbleSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::cout << "Using Bubble Sort" << std::endl;
        // Implement Bubble Sort here
        // ...
    }
};

class QuickSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::cout << "Using Quick Sort" << std::endl;
        // Implement Quick Sort here
        // ...
    }
};

// Context class
class SortContext {
private:
    SortingStrategy* strategy;

public:
    SortContext(SortingStrategy* strat) : strategy(strat) {}

    void setStrategy(SortingStrategy* strat) {
        strategy = strat;
    }

    void performSort(std::vector<int>& data) {
        strategy->sort(data);
        // Additional sorting-related logic can be added here
    }
};

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};

    BubbleSort bubbleSort;
    QuickSort quickSort;

    /*SortContext context(&bubbleSort); // Start with Bubble Sort
    context.performSort(data);*/

    SortContext context(&quickSort); // Switch to Quick Sort
    context.performSort(data);

    return 0;
}
