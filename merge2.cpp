#include <iostream>

using namespace std;

void mergeSort(int A[],int p, int r);
void merger(int A[], int p, int q, int r);

int main(){
    int A[]={23,34,24,56,90,67,34,99,46,65,47,24};
    int p=0;
    int r= (sizeof(A)/4)-1;
    mergeSort(A,p,r);
    int i=0;
    while(i<=r){
        cout<<A[i]<<endl;
        i++;
    }
    return 0;
}

void mergeSort(int A[], int p, int r){
    //cout<<"entered"<<endl;
    if(p<r){
        int q=(p+r)/2;
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        merger(A,p,q,r);

    }
}

void merger(int A[], int p, int q, int r){
    int i=p,j=q+1,m=0;
    int L[r-p+1];
    //comparing and merging
    //i=0,j=0,k=p,l=q,m=r;
    while(i<=q && j<=r){
        if(A[i]<=A[j]){
            L[m]=A[i];
            i++;
            m++;

        }
        if(A[i]>=A[j]){
            L[m]=A[j];
            j++;
            m++;

        }
    }
    while(i<=q && j>r){
            L[m]=A[i];
            i++;
            m++;

    }
    while(i>q && j<=r){
            L[m]=A[j];
            j++;
            m++;

    }
    i=p,j=0;
    while(i<=r){
        A[i]=L[j];
        i++;
        j++;

    }

}
