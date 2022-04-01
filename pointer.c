#include<stdio.h>
#include<math.h>
int main(){
   float a[10],sum=0,mean=0,var=0,sd=0;
   float *p;
   p=&a[0];
int n,i;
printf("Enter the number of Elements:");
scanf("%d",&n);
printf("\nEnter the elemenets:\n");
for(i=0;i<n;i++){
	scanf("%f",p);
	p++;
}
p=&a[0];
for(i=0;i<n;i++)
{
	sum=sum+(*p);
	p++;
}
mean=sum/n;
p=&a[0];
for(i=0;i<n;i++)
{
	var=var+pow(mean-(*p),2);
	p++;
}
var=var/n;
sd=sqrt(var);
printf("Sum=%f\n Mean=%f\n Varience=%f\n StandDav=%f",sum,mean,var,sd);
return 0;
}

