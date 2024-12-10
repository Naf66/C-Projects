#include<stdio.h>

int main(){

int n;
int fact=1;
printf("Enter number:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("The factorial of %d is %d",n,fact);
return 0;

}