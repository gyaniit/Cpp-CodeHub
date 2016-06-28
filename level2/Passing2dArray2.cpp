//Passing 2D array in c++
//Method 2
#include <iostream>
#include <stdio.h>
using namespace std;
//#define size_t int

template <size_t size_x, size_t size_y>
void func(double (&arr)[size_x][size_y])
{
    printf("%p\n", &arr);
}

int main()
{
    double a1[10][10];
    double a2[5][5];

    printf("%p\n%p\n\n", &a1, &a2);
    func(a1);
    func(a2);

    return 0;
}
