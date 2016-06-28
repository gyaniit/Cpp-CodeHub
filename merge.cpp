//Merge Sort
#include<iostream>
#include<stdlib.h>

using namespace std;

//functions
void mergesort(int A[],int s,int e);
void merger(int A[],int s, int m, int e);


//main method
int main(){
    //input
    /*
    int n;
    cout<<"enter size of data : ";
    cin>>n;
    int A[n];
    cout<< "enter data : ";
    */
    int A[]={23,65,43,21,90};
    int n=sizeof(A)/4;
    //cout<<n;
    //function call
    int i;
    //for(i=0;i<n;i++){
        //cin>>A[i];
       // cout<<A[i]<<endl<<endl;
    //}
    mergesort(A,0,n);

    cout<<"the sorted array"<<endl;
    int x=0;
    while(x<n){
        cout<<A[x]<<endl;
        x++;
    }
    return 0;

}

//extra functions
void mergesort(int A[],int s, int e){
        //int m =0;
        if(s<e){
            int m=(s+e)/2;
            mergesort(A,s,m);
            mergesort(A,m+1,e);
            merger(A,s,m,e);
        }
}


void merger(int A[],int s,int m,int e){

    int a=0,b=0,i=s,j=m+1;
    int n = sizeof(A)/4;
    int l = m-s+1;
    int r = e-m;
    int L[l],R[r];
    for(a=0;a<l;a++){
        L[a]=A[i];
      //cout<<"first"<<L[a]<<endl;
        i++;
    }
    //cout<<endl<<endl;
    for(b=0;b<r;b++){
        R[b]=A[j];
        //cout<<L[b]<<endl;
        j++;
    }
    a=0,b=0;
    i=s;

    while(i<=e){
        if(L[a]<R[b] && a<l && b<r){
            A[i]=L[a];
            a++;
            i++;
            cout<<"mark1";
        }
        else if(L[a]>R[b] && a<l && b<r){
            A[i]=R[b];
            b++;
            i++;
        }
        else if(a>l && b<r){
            A[i]=R[b];
            i++;
            b++;
        }
        else if(a<l && b>r){
            A[i]=L[a];
            i++;
            a++;
        }
        else if(a>l && b>r){
            break;
        }

    }
}
