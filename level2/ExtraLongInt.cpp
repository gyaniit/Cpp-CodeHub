//ExtraLongInt
#include <iostream>
#include <vector>
using namespace std;

class extra_large_int{
	vector <int> A;
	public:
	extra_large_int(){
		A.push_back(0);
	}
	extra_large_int(int val){
		while(val!=0){
			A.push_back(val%10);
			val=val/10;
		}
	}
	void pop(){
		A.pop_back();
	}
	void push(int a){
		A.push_back(a);
	}
	int sizeA(){
		return A.size();
	}
	void print(){
		int sz=A.size(),st;
		(A[sz-1]==0)?(st=sz-2):(st=sz-1);

		for(int i=st;i>=0;i--){
			cout<<A[i];
		}
		cout<<endl;
	}
	int valu(int i){
		return A[i];
	}
	void put(int value,int pos){
		A[pos]=value;
	}
};

//adding the extra large int..................................................
void addd(extra_large_int val1, extra_large_int val2, extra_large_int* rval){
	int carry=0;
	int n1=val1.sizeA();
	int n2=val2.sizeA();
	int sum=0;
	if(n1>n2){
		for(int i=0;i<n2;i++){
			sum=val1.valu(i)+val2.valu(i)+carry;
			rval->push(sum%10);
			carry=sum/10;

		}
		for(int i=n2;i<n1;i++){
			sum=val1.valu(i)+carry;
			rval->push(sum%10);
			carry=sum/10;
		}
	}
	else{
		for(int i=0;i<n1;i++){
			sum=val1.valu(i)+val2.valu(i)+carry;
			rval->push(sum%10);
			carry=sum/10;
		}
		for(int i=n1;i<n2;i++){
			sum=val2.valu(i)+carry;
			rval->push(sum%10);
			carry=sum/10;
		}
	}
	if(carry!=0)
		rval->push(carry);
}
//...............................................................................
//multiplying the extra large int.................................................
void multi(extra_large_int val1, extra_large_int val2, extra_large_int* rval){
	int carry=0;
	int n1=val1.sizeA();
	int n2=val2.sizeA();
	int t=n1+n2;
	for(int i=0;i<t;i++){
		rval->push(0);
	}
	int multi=0,start=0,pos=0;
	for(int i=0;i<n1;i++){
		pos=start;
		start++;
		for(int j=0;j<n2;j++){
			multi=val1.valu(i)*val2.valu(j)+carry+rval->valu(pos);

			rval->put(multi%10,pos);
			carry=multi/10;
			pos++;
		}
		rval->put(carry,pos);
		carry=0;
	}
}
//.....................................................................................

int main(){
	int a1=999,b1=1,c1=0,d1=0;
	extra_large_int a(a1);
	extra_large_int b(b1);
	extra_large_int c(c1);
	extra_large_int d(d1);
	addd(a,b,&c);
	multi(a,b,&d);
	c.print();
	d.print();
	//c.print();


}
