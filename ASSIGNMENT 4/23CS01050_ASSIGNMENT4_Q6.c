#include<stdio.h>
int main(){

int n,a,b,c,d,e,f;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
switch(n){

case 1:
c = a+b;
printf("%d\n",c);
break;
case 2:
d = a-b;
printf("%d",d);
break;
case 3:
e = a*b;
printf("%d",e);
break;
case 4:
f = a/b;
printf("%d",f);
break;










}












    return 0;
}