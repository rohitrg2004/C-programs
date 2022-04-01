#include<stdio.h>
#include<math.h>
int main()
{
 int n1,num,r,result=0,n;
printf("Enter the Number of digits",n);
scanf("%d",&n);
printf("Check whether the n digit is Armstrong or not");
printf("Input an integer");
scanf("%d",&n1);
num=n1;
while(num!=0)
{
num/=10;
++n;
}
num=n1;
while(num!=0)
{
r=num%10;
result+=pow(r,n);
num/=10;
}
if(result==n1)

printf("%d is the armstrong number",n1);

else
printf("%d is not the armstrong number",n1);

return 0;
}
