#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;

    vector <string> vect;

    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if(emailID.find("@gmail.com")!=-1){
                vect.push_back(firstName);
        }
    }

    sort(vect.begin(),vect.end());

    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<endl;


    return 0;
}
