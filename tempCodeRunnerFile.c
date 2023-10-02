#include<stdio.h>
void main()
{
float x,den=1;
int i,sign=1,sum=x,num=x,n;
printf("enter the degree");
scanf("%f",&x);
printf("enter the number of terms");
scanf("%d",&n);

for(i=1;i<n-1;i++)
{
num=num*x*x;
den=den*2*i*(2*i-1);
sign=sign*(-1);
sum=sum+sign*(num/den);
}
printf("%d",sum);



