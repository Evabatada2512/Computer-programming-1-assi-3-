#include<stdio.h>
int main()
{
int i,a;
printf("The sum of all the numbers divisible by 13 from 0 to 100 is:\n");
for(i=0;i<=100;i++)
{
if(i%13==0)

{
    a=a+i;
}
}
printf("%d",a);
return 0;
}
