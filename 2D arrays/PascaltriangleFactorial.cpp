//given an integer n, return the first n rows of Pascal's Triangle using factorial

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to generate Pascal's triangle using factorial method
void generatePascalsTriangle(int n) {
    int triangle[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            triangle[i][j] = factorial(i) / (factorial(j) * factorial(i - j));
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> n;
    generatePascalsTriangle(n);
    return 0;
}
