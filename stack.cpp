#include <iostream>
#include <stack>
using namespace std;

int main(){

int n;
double item;
stack <double> numbers;
 cout<<"Enter no of enteries followed by enteries"<<endl;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>item;
    numbers.push(item);
 }
 cout<<"Numbers in reverse order"<<endl;
 while(!numbers.empty()){
    cout<<numbers.top()<<" ";
    numbers.pop();
 }
 cout<<endl;

}
