#include <iostream>
#include <string>
#include <vector>
using namespace std;


void prntPermu(vector <char> &vect1, int i, int n);
void printer(vector <char> &vect);

 int main(){
        string str = "ABCD";
        vector <char> vect;
 	int i = 0, len =str.length();
 	while(i<len){
		vect.push_back(str[i]);
		i++;
 	}
 	prntPermu(vect , 0, vect.size()-1);
 }

 void prntPermu(vector <char> &vect, int i, int n){

	for(int j=i;j<=n;j++){
		if( i<n){
			swap(vect[i],vect[j]);
			prntPermu(vect,i+1,n);
		}
		if(i==n-1){
			printer(vect);
		}
		swap(vect[j],vect[i]);
	}
 }

 void printer(vector <char> &vect){  //passing by reference makes the fuction to use the actual vector instead of making a copy of it
 	int i=0;
 	int n = vect.size();
 	while(i<n){
		cout<<vect[i];
		i++;
 	}
 	cout<<endl;
 }


 //getline(cin,s1) -> takes input from keyboard and stores complete line in s1
 //cin >> s1 -> takes input from keyboard but only one word at a time
