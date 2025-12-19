#include <iostream>

using namespace std;

struct Matrix {
    int rows;
    int cols;
    int data[3][4]; // fixed-size matrix for simplicity
};

int main() {
    // Initialize matrix
    Matrix m = {
        3, 4,
        {
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9, 10, 11, 12}
        }
    };

    // O(1) access (direct indexing)
    cout << "O(1) access example:\n";
    cout << "Element at [1][2] = " << m.data[1][2] << "\n\n";

    // O(n * m) traversal (row-wise)
    cout << "Row-wise traversal (cache-friendly):\n";
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            cout << m.data[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // O(n * m) traversal (column-wise)
    cout << "Column-wise traversal (less cache-friendly):\n";
    for (int j = 0; j < m.cols; j++) {
        for (int i = 0; i < m.rows; i++) {
            cout << m.data[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

