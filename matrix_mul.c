#include<stdio.h>
int main()
{
int a[20][20],b[20][20],c[20][20];
int i,j,k,m,n,q,p;
printf("Enter Matrix 1 rows cols:");
scanf("%d%d",&m,&n);
printf("Enter Matrix 2 rows cols:");
scanf("%d%d",&p,&q);

for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
if (n!=p)
 {
  printf("Matrix Multiplication is not Possible");
 }
else
{
	for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
				{
					c[i][j]=0;
                                        for(k=0;k<n;k++)
						{
						c[i][j]=c[i][j]+a[i][k]*b[k][j];
  						}
				}
		}
printf("Product of Matrix 1 and 2:");
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
}
}
return 0;
}
