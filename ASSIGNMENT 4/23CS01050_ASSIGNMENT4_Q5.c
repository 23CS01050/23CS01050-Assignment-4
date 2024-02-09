#include<stdio.h>
#include<math.h>
int main(){

int num ;
printf("enter the number");
scanf("%d",&num);
int a;
a = num/100;

int b;
b = num/10;
int c ;
c = b-(a*10);
int d;

d = num-(a*100)-(c*10); 

int e;
e = pow(a,3) + pow (c,3) + pow(d ,3);

if(e =num && num>=100 && num<=999){
    printf("number is armstrong number ");

}

else{
    printf("invalide input");
}



    return 0;
}