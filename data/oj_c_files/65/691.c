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
  int n,i,j,s;
  int a[200][3];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%d %d",&(a[i][0]),&(a[i][1]));
  }
  j=0;s=0;
  for(i=0;i<n;i++)
  {
      if((a[i][0]==0&&a[i][1]==1)||(a[i][0]==1&&a[i][1]==2)||(a[i][0]==2&&a[i][1]==0))
           j++;

      if((a[i][1]==0&&a[i][0]==1)||(a[i][1]==1&&a[i][0]==2)||(a[i][1]==2&&a[i][0]==0))
           s++;
  }
  if(j<s)
	  printf("B");
  if(j>s)
	  printf("A");
  if(j==s)
	  printf("Tie");
  return 0;
}
