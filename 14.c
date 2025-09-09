#include<stdio.h>
int main()
{
int i;
float a,b;
for(i=13;i<23;i++)
{
a=a+i;
b=a/10;
}
printf("The sum of values is:%.2f\n",a);
printf("The average of values is:%.2f",b);
return 0;
}
