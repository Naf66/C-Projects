#include<stdio.h>

int main(){

int a, b, x;

printf("Enter Two Numbers:");
scanf("%d %d",&a,&b);

printf("Modes:\n 1.Add\n 2.Substract\n 3.Multiply\n 4.Devide\nEnter mode:");
scanf("%d",&x);


if(x==1){
    printf("The sum is :%d ",a+b);

    } 
    
    else if(x==2){
         printf("The difference is :%d ",a-b);

         } 

    else if(x==3){
    printf("The multiply is :%d ",a*b);

    } 
    else if(x==4){
    printf("The division is :%f ",a/b);

    } 
    return 0;
}
