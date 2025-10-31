#include<stdio.h>
int main (){
int i, x;
printf("Enter the no.: ");
scanf("%d,&i");
for(i=1; i<=200; i++)
{
    if(x%3==0 && x%5==0 && x%7==0)
{
break;
   } 
   printf("%d",x);
}
     return 0;
}