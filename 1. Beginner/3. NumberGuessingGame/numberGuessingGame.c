#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

srand(time(0));
int randomN=rand() % 100 + 1;
int x;
printf("Let's play a game\nTo stop game enter 0\nGuess a number between 1-100 : ");


do{scanf("%d",&x);
if(randomN==x){
    
    printf("Hurrah!! You guessed it right\n");
}
 else if (randomN<x){
    printf("you guessed too high !!\n");
 }
  else if(x==0) {
   break;}
   else{
    printf("you guessed too low !!\n");
 }
}
while(randomN!=x);
return 0;

    
}