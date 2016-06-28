#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int t;
    cin>>t;
    string line;//this is commented
    stack <char>s;
    int flag,i;
    char c;
    while(t){

        flag=0;
        cin>>line;
        i=0;
        while(i<line.length()){
            c=line[i];
            switch(c){
                case '{' : s.push(c); break;
                case '(' : s.push(c); break;
                case '[' : s.push(c); break;
                case '}' : if(!s.empty()){if(s.top()=='{') s.pop(); else flag=1;} else flag=1; break;
                case ')' : if(!s.empty()){if(s.top()=='(') s.pop(); else flag=1;} else flag=1; break;
                case ']' : if(!s.empty()){if(s.top()=='[') s.pop(); else flag=1;} else flag=1; break;
            }

            if(flag==1){
                cout<<"NO"<<endl;
                return 0;
            }

        }

        if(s.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        t--;
    }
    return 0;
}
