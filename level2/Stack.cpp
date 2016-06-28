include <iostream>
using namespace std;

////////////////////////////////////////////////////////////Stack Definition////////////////////////////////////////////////////////////////
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};

struct ArrayStack *CreateStack(){
	struct ArrayStack *S = malloc(sizeof(struct ArrayStack));
	if(!S)
		return NULL;

	S->capacity = 1;
	S->top = -1;
	S->array = malloc(S->capacity * sizeof(int));
	if(!S->array)
		return NULL;

	return S;
};

int IsEmptyStack(struct ArrayStack *S){
	return (S->top == -1);	//return true if top==-1 else return false
}

int IsFullStack(struct ArrayStack *S){
	return (S->top == S->capacity -1 );	//return true if top has reached the capacity else false
}

void Push(struct ArrayStack *S, int data){
	if(IsFullStack(S))
		cout<<"Stack overflow"<<endl;	//to check if stack is full
	else
		S->array[++S->top] = data;	//it will increment the value of top by 1 unit and then add the data at that position in the array
}

int Pop(struct ArrayStack *S){
	if(IsEmptyStack(S)){
		cout<<"Stack underflow"<<endl;	//to check if stack is empty
		return 0;
	}
	else
		return (S->array[S->top--]); 	//it will return the top element of the stack and then reduce the top position by 1
}

void DeleteStack(struct ArrayStack *S){
	if(!S){
		if(S->array)
			free(S->array);
		free(S);
	}
}

/////////////////////////////////////////////////////////////////Main function/////////////////////////////////////////////////////////////////////////

int main(){

}
