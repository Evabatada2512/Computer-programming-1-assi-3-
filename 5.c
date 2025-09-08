#include<stdio.h>
int main()
//code for first n odd numbers.
{
int i,n;
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("The first n odd numbers are:\n");
for(i=1;i<=n;i=i+2)
{
    printf("%d\n",i);
}
return 0;
}
