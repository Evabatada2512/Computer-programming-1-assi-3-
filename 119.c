#include<stdio.h>
int main()
{
int n,i;
int a=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    a=a*i;
}
printf("Factorial of %d= %d\n.", n,a);
return 0;
}
