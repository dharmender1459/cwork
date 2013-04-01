/* to find the range of integer */
#include<stdio.h>
int main()
{
int a;
for(a=0;;a++)
{
if(a<0)
{
printf("%d ",a);
a--;
printf("to %d\n",a);
break;
}
}
return 0;
}
