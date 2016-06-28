#include <stdio.h>

int add(int x , int y);

int main(){
    int a,b;

    scanf("%d %d",&a,&b);
    int s,p;
    s=add(a,b);
    p=s*100;
    printf("%d",p);
}

int add(int x , int y){
    int z = x+ y;
    return z;
}
