#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
 int n,a[100000][2],i,j,q;   
 int b[100000]={0},c[100000]={0};
 scanf("%d",&n);
 scanf("%d %d",&a[0][0],&a[0][1]);
 
 for(i=1;a[i-1][0]+a[i-1][1]!=0;i++) 
  scanf("%d %d",&a[i][0],&a[i][1]);
 q=i-1;                 
 
 for(j=0;j<n;j++)
 { 
  for(i=0;i<q;i++)
  {
   if(j==a[i][1])
   b[j]++;               
  } 
 }
 
 for(j=0;j<n;j++)
 { 
  for(i=0;i<q;i++)
  {
   if(j==a[i][0])
   {
    c[j]++;
    break;
   }               
  } 
 }
 for(j=0;j<n;j++)
 {
  if(b[j]==n-1&&c[j]==0)
  printf("%d",j);                
 } 
 getchar();
 getchar();
 return 0;
}
