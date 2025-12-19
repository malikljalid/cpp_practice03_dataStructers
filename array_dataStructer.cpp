#include <iostream>

struct Scores {
    int data[5];  // array as the core data structure
};

int main() {
    Scores scores = {{10, 20, 30, 40, 50}};

    // O(1) access
    int thirdScore = scores.data[2];

    std::cout << thirdScore << std::endl; // 30

    // O(N) traversing
    for (int i = 0; i < 5; i++) {
    	std::cout << scores.data[i] << std::endl;
    }
}

