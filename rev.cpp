
#include <iostream>
//#include <stack>
using namespace std;

int main(){

int n;

 cout<<"Enter no of enteries followed by enteries"<<endl;
 cin>>n;
 double item[n];
 for(int i=0;i<n;i++){
    cin>>item[i];

 }
 cout<<"Numbers in reverse order"<<endl;
 int i=n-1;
 while(i>=0){
    cout<<item[i]<<" ";
    i--;
 }
 cout<<endl;

}
