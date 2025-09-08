#include<stdio.h>
int main()
//code for first n even numbers.
{
int i,n;
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("The first n even numbers are:\n");
for(i=2;i<=n;i=i+2)
{
    printf("%d\n",i);
}
return 0;
}
