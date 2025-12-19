#include <iostream>
#include <vector>

using namespace std;

int main() {

    // ================================
    // VECTOR: random access container
    // ================================
    vector<int> v = {10, 20, 30, 40};

    cout << "Vector access by index (O(1)):\n";
    cout << "v[0] = " << v[0] << endl;
    cout << "v[2] = " << v[2] << endl;

    // This is possible because vector is:
    // - contiguous in memory
    // - designed for random access


    cout << "\n-----------------------------\n\n";


    // ================================
    // STACK: concept explanation ONLY
    // ================================
    cout << "Stack concept (NO indexing):\n";
    cout << "Imagine a stack with values: 10, 20, 30, 40\n\n";

    cout << "You can ONLY:\n";
    cout << "- Look at the top element\n";
    cout << "- Push to the top\n";
    cout << "- Pop from the top\n\n";

    cout << "You CANNOT do:\n";
    cout << "- stack[2]\n";
    cout << "- get the middle element directly\n\n";

    cout << "Reason:\n";
    cout << "A stack is an ACCESS RESTRICTION, not a memory layout.\n";

    return 0;
}

