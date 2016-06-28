//Passing 2D array in c++
//Method 1
//Problem memory needs to be cleared once used as pointer implementation

#include <iostream>
using namespace std;
#include <stdio.h>
// Same as "void print(int **arr, int m, int n)"
void print(int *arr[], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        printf("%d ", arr[i][j]);
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3;
    int n = 3;
    int *b[3];
    for (int i = 0; i < 3; ++i)
    {
        b[i] = arr[i];
    }
    print(b, m, n);
    return 0;
}
