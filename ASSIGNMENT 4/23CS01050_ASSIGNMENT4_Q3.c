#include<stdio.h>
int main(){

float currentbalance;
printf("enter the current balance:\n");
scanf("%f",&currentbalance);
int creditscore;
printf("enter the credit score\n");
scanf("%d",&creditscore);
float i;

if(creditscore<600){
    i = 0.15*currentbalance;
    printf("interst rate is %f",i);
}
if(creditscore>=600&&creditscore<=750){
    i = 0.12*currentbalance;
    printf("interst rate is %f",i);
}
if(creditscore>750){
    i = 0.1*currentbalance;
    printf("interst rate is %f",i);
}









    return 0;
} 