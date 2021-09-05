#include <stdio.h>
int main()
{
 int n,i,ck=1;
 scanf("%d",&n);
 for(i=2;i<n;i++)
 
 {
 if(n%i==0)
 {
 printf("Not Prime Number\n");
 ck=2;
 break;
 }
 
 }
 if(ck==1) printf("Prime Number");
 return 0;
}