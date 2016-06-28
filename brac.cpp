#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <char> bracket1;
    stack <char> bracket2;
    char symbol;

    while((symbol=cin.get())!='\n')
    {
       if(symbol=='{' || symbol=='[' || symbol=='(' || symbol==')' || symbol==']' || symbol=='}')
        {
            bracket1.push(symbol);
        }
    }
    bool match=true;
    char c;
    int flag=1;
    while( match && !(bracket1.empty()))
    {
        c=bracket1.top();
        bracket1.pop();
        if(c==')' || c=='}' || c==']'){
           if((bracket1.top()=='(' && c==')') || (bracket1.top()=='{' && c=='}') || (bracket1.top()=='[' && c==']'))
                {
                    bracket1.pop();
                    continue;
                }
                else{
                    bracket2.push(c);
                }
        }
        else if(c=='(' || c=='{' || c=='['){
            if((c=='(' && bracket2.top()==')') || (c=='{' && bracket2.top()=='}') || (c=='[' && bracket2.top()==']') )
                {
                    bracket2.pop();
                    continue;
                }
            else{
                    match=false;
                    flag=0;
                }
        }


    }
    if(flag==0){
        cout<<"not ";
    }
    cout<<"matching";

}
