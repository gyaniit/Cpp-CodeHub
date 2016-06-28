#include <iostream>
using namespace std;

void insr(int A[], int s){
        int key = 1;
        int val = A[key];
        int j;
        while(key<s){
                        j=key-1;
                while(A[j]>val && j>=0){
                        A[j+1]=A[j];
                        j--;
                }
                A[j+1]=val;
                key++;
                val=A[key];

        }

}

int main(){
        int n;
        cout<<"Enter size of array to be sorted    : ";
        cin>>n;
        cout<<"Enter array of size "<<n<<" to be sorted  : ";
        int arr[n];
        for(int i = 0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"Sorted array (using Insertion Sort) : ";
        insr(arr,n);
        for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";;
        }
        cout<<endl<<endl;
        return 0 ;
        }
