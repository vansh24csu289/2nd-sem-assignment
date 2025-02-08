#include <iostream>
using namespace std;
void rotateMatrix(int arr[][4], int n) {
    int rotated[4][4];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = arr[i][j];
        }
    }
    cout << "Rotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4] = {{1, 2, 3,4}, { 5, 6,7,8}, { 9,10,11,12},{13,14,15,16}};
    int n = 4;

    cout << "Original Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrix(matrix, n);
    return 0;
}
