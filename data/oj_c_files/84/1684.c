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
 int arr[100];
 int n=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 int max=-10000;
 for(int s=0;s<n;s++)
 {
  max=(max>=arr[s])?max:arr[s];
 }
 int sm=-10000;
 for(int j=0;j<n;j++)
 {
      if(arr[j]!=max)
  {
if(arr[j]>sm)
sm=arr[j];
  }
 }
 printf("%d\n",max);
 printf("%d",sm);
 return 0;
}
