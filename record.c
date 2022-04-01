#include<stdio.h>
int main()
{
struct student
	{
		int rollno,sem;
		char name[10];
		float m1,m2,m3,m4,m5,Avg;
	};
	int N,i;
	printf("Enter no.of students\n");
	scanf("%d",&N);
	struct student s[N];
	printf("Enter %d student information\n",N);
for (i=0;i<N;i++)
{
 printf("Enter rollno.");
 scanf("%d",&s[i].rollno);
 printf("Enter Sem:");
 scanf("%d",&s[i].sem);
 printf("Enter Name:");
 scanf("%s",s[i].name);
 printf("Enter 5 subjects Marks:");
 scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
 s[i].Avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
}
printf("student above avg\n");
for(i=0;i<N;i++)
 {
  if(s[i].Avg>35.0)
   {
    printf("%s\t%d\t\%f\n",s[i].name,s[i].sem,s[i].Avg);
   }
 }
printf("student below avg\n");
for(i=0;i<N;i++)
 {
  if(s[i].Avg<=35.0)
   {
    printf("%s\t%d\t\%f\n",s[i].name,s[i].sem,s[i].Avg);
   }
 }
return 0;
}

