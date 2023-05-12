#include <iostream>
using namespace std;

void fillSquare(int n) {
    int a[n][n];  // 2D array to store the square

    // Fill the outermost edge with 1
    for (int i = 0; i < n; i++) {
        a[0][i] = 1;      // Top row
        a[i][0] = 1;      // Left column
        a[n-1][i] = 1;    // Bottom row
        a[i][n-1] = 1;    // Right column
    }

    // Fill the middle with 0
    int mid = n/2;
    a[mid][mid] = 0;

    // Fill the remaining squares
    for (int i = 1; i <= mid; i++) {
        // Fill border with 1
        for (int j = i; j < n-i; j++) {
            a[i][j] = 1;         // Top border
            a[j][i] = 1;         // Left border
            a[n-1-i][j] = 1;     // Bottom border
            a[j][n-1-i] = 1;     // Right border
        }
        // Fill outer border with 0
        a[i-1][i] = 0; a[n-i][i] = 0;    // Top outer border
        a[i-1][n-i-1] = 0; a[n-i][n-i-1] = 0;  // Bottom outer border
        a[i][i-1] = 0; a[i][n-i] = 0;    // Left outer border
        a[n-i-1][i-1] = 0; a[n-i-1][n-i] = 0;  // Right outer border
    }

    // Print the square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}

