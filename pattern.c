/* WAP to print a pattern      *
                              * *
                             * * *
                              * *
                               *

*/
#include<stdio.h>
void main()
{
int n;
printf("Enter n:");
scanf("%d",&n);
for(int i=n; i>0 ;i--)
 {
  for(int j=i;j>1;j--)
  printf(" ");
  for(int k=0;k<=n-i;k++)
  printf("* ");
  printf("\n");
 } 
for(int y=n-1; y>0 ;y--)
 {
  for(int j=1;j<=n-y;j++)
  printf(" ");
  for(int k=1;k<=y;k++)
  printf("* ");
  printf("\n");
 } 
}                        
