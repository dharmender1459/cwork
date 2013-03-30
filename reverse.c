/* to print the reverse of a number */
#include<stdio.h>
int main()
 {
  int rev=0,rem=0,num;
  printf("enter the number=");
  scanf("%d",&num);
  for(;num>0;)                              //to terminate the condition 
   {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
   }
  printf("%d\n",rev);                      // number afrer reversing 
  return 0;
 }

