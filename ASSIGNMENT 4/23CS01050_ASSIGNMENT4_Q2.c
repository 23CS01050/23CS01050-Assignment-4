#include<stdio.h>
int main(){

int a,b,c;
printf("enter the a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c){
    printf("greatest number is %d",a);

}
if (b>a&&b>c){
    printf("greatest number is %d",b);
}
else if(c>a&&c>b){
printf("greatest number is %d",c);
}












    return 0;
}