//Insertion-Sort-c++
#include <iostream>
#include <vector>

using namespace std;
//printer function
void printer(vector <int> ar){
    for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
//insertion sort function
void insertionSort(vector <int>  ar) {
    int key,n=ar.size();
    int i=0;
    for(int j=1;j<n;j++){
        key=ar[j];
        i=j-1;
        while(i>=0 && ar[i]>key){
            ar[i+1]=ar[i];
            i--;
            printer(ar);
        }
        ar[i+1]=key;
    }
    printer(ar);

}
//main function
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);
    return 0;
}
