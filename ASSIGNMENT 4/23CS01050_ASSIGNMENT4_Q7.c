#include<stdio.h>
int main(){
int age,price;
printf("enter the age:");
scanf("%d",&age);
if(age<5){
    price = 0;
    printf("your ticket price is %d" ,price);

}
if(age>=5&&age<=12){
    price = 20;
   printf("your ticket price is %d" ,price);
}
if(age>=13&&age<=59){
    price = 50;
    printf("your ticket price is %d" ,price);

}
if(age>=60){

    price =50 -(50*0.2);
    printf("your ticket price is %d" ,price);

}













    return 0;
}