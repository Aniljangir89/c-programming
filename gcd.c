// how to find gcd of two number
// 2212090
#include <stdio.h>
int min(int a,int b){
    if(a>b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
       if(a%i==0&&b%i==0){
           hcf=i;
       }
    }
   return hcf;
}
int main() {
   int a,b;
   printf("enter the value of first number a:-");
   scanf("%d",&a);
   printf("enter the value of second number a:-");
   scanf("%d",&b);
   int HCF= gcd(a,b);
   printf("the HCF is :-%d",HCF);
  return 0;
}
