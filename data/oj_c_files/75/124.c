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

int a[1005],b[1005];
int tm[1005];
int main()
{
  int n,t=0,i,j,k=0;
  char m;
  while(1)
  {
  scanf("%d",&a[++t]);
  scanf("%c",&m);
  if(m == '\n') break;
  }
  for(i =1 ;i <= t;i++)
  {
     scanf("%d",&b[i]);
     scanf("%c",&m);
  }
  for(i = 1;i <= t;i++)
     for(j = a[i];j < b[i];j++)
        {
             tm[j]++;
             if(tm[j]>k)  k = tm[j];  
        }
  printf("%d %d",t,k);
 return 0;    
}