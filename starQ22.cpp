#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 7; // size of pattern
    int arr[n][n]; // 2D array to store pattern
    int mid = (n-1)/2; // index of middle row and column

    // Fill the array with values
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int dx = min(abs(i-mid), abs(i-(n-1-mid))); // horizontal distance from center
            int dy = min(abs(j-mid), abs(j-(n-1-mid))); // vertical distance from center
            int d = max(dx, dy); // maximum of horizontal and vertical distances
            arr[i][j] = mid - d; // value is distance from center
        }
    }

    // Print the array in a grid pattern
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
