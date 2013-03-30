/*to find a number is even or odd */
#include<stdio.h>
int main()
{
int num;
printf("Enter a number =");
scanf("%d",&num);
if((num & 1)==0)
printf("Even\n");
else
printf("Odd\n");
return 0;
}
