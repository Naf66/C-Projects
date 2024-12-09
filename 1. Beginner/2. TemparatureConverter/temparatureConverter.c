#include<stdio.h>

int main(){

    int m;
    float temp,r;

    printf("Temparature conversion modes \n 1. Farenheit to Celcius \n 2. Celcius to Farenheit\n\n Enter mode:");
    scanf("%d",&m);

    if(m==1){
        printf("Enter temparature in Farenheit(32<=input<=212):");
        scanf("%f",&temp);
        r=temp-32;
        r=r*5/9;

        printf("Temparature in Celcius :%f",r);
    }
    else if(m==2){
        printf("Enter temparature in Celcius(0<=input<=100):");
        scanf("%f",&temp);
        r=temp*9/5;
        r=r+32;
        printf("Temparature in Farenheit :%f",r);

    }
    else{
        printf("Enter valid mode !!");
    }

    return 0;
}
