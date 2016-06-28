#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int sweeter(queue<int> &qu, int maxi){
    if(qu.empty()) { return -1; }

    int qu_size=qu.size();
    if(qu_size==1 && qu.front()<maxi) { return -1; }
    if(qu_size==1 && qu.front()>maxi) { return 0; }

    int a = qu.front();
    qu.pop();
    int fn = a + 2 * qu.front();
    qu.pop();
    //cout<<qu.size()<<" "<<fn<<endl;
    if(qu.empty()){
        if(fn>=maxi) return 1;
        else { return -1; }
    }
    //////////////////////////////


    int i =0,l = qu.size();
    while(i<l){
        if(qu.front()<fn){
            int x = qu.front();
            qu.pop();
            qu.push(x);
        }
        else{
            qu.push(fn);
            fn=qu.front();
            qu.pop();
        }
        if(fn>maxi) {
            while(qu.front()>fn){
                if(qu.empty()) break;
                qu.pop();
            }
        }
        i++;
    }
    if(qu.front()<fn)
        qu.push(fn);
    ///////////////////////////////////

    if(qu.front()>=maxi) return(1);

    int n = sweeter(qu,maxi);
    if(n==-1) { return -1; }
    else return(1+n);


}

int main() {
    int t,maxi,a;
    cin>>t;
    cin>>maxi;
    vector<int> vect;
    int flag=0;
    while(t--){
        cin>>a;
        if(a<maxi || flag==0){
            if(a>=maxi) flag=1;
            vect.push_back(a);
        }
    }
    int i=0;
    sort(vect.begin(),vect.end());
    queue<int> qu;
    int v_size=vect.size();
    while(i<v_size){
        qu.push(vect[i]);
        //cout<<vect[i]<<" ";
        i++;

    }
    //cout<<endl;
    cout<<sweeter(qu,maxi);
    //cout<<"done";

    return 0;
}
