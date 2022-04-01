#include<stdio.h>
int main()
{
int a[20],number,i,j;
printf("Enter the decimal Number:");
scanf("%d",&number);
for(i=0;number>0;i++)
{
a[i]=number%2;
number=number/2;
}
printf("the binary number is:");
for(j=i-1;j>=0;j--)
{
printf("%d",a[j]);
}
printf("\n");
return 0;
}
