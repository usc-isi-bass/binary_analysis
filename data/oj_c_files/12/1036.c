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
int m=0,i,j,a[16],k;
  for(i=1;;i++)
  {k=0;
  for(i=0;i<16;i++)  
  {scanf("%d",&a[i]);
  if(a[i]==0)break;
  else if(a[i]==-1){m=1;break;}
  }
  if(m==1)break;
  for(i=0;a[i]!=0;i++)
for(j=0;a[j]!=0;j++)
if(a[i]==2*a[j])k++; 
printf("%d\n",k);
  }
return 0;
}