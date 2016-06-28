//Passing 2D array in c++
//Method 3
//easiest method
#include<iostream>

using namespace std;

//for changing values in 2D array
void myFunc(double *a,int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            *(a+ i*rows + j)+=10.0;
        }
    }
}

//for printing 2D array,similar to myFunc
void printArray(double *a,int rows,int cols){
    cout<<"Printing your array...\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<*(a+ i*rows + j)<<"  ";
        }
    cout<<"\n";
    }
}

int main(){
    //declare and initialize your array
    double a[2][2]={{1.5 , 2.5},{3.5 , 4.5}};

    //the 1st argument is the address of the first row i.e
    //the first 1D array
    //the 2nd argument is the no of rows of your array
    //the 3rd argument is the no of columns of your array
    myFunc(a[0],2,2);

    //same way as myFunc
    printArray(a[0],2,2);

    return 0;
}
