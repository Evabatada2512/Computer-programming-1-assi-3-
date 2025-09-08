#include<stdio.h>
int main()
//code for first n natural numbers.
{
int i,n;
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("The first n natural numbers are:\n");
for(i=1;i<=n;i++)
{
    printf("%d\n",i);
}
return 0;
}
