#include<stdio.h>

int main(){

int n1=0,n2=1,n3,x;

printf("enter fibonacci count:");
scanf("%d",&x);
if(x>=1){
    printf("%d\n",n1);
}
if(x>=2){
    printf("%d\n",n2);
}

for(int i=2; i<x;i++){
   
    n3=n2+n1;
     printf("%d\n",n3);
    n1=n2;
    n2=n3;
}
return 0;
}