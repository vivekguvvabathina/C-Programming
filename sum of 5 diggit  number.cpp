#include<stdio.h>
 int main ()
 {
 int n,a,sum=0,i;
 printf (" enter the number ");
 scanf("%d",&n);
 while (n>0)
 {
 
 a=n%10;
 sum = sum*10+a;
 n=n/10;
 }
 printf("\n reverse of number is ",n);
 return 0;
}
