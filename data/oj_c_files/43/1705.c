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

int su(int p)
 {
 int i,j,w;
 w=1;
 for (i=2;i<p;i++)
  if (p%i==0) w=0;
  if (w==1) return(1);
   else return(0);
   }
main()
{
int m,i,j,k;
scanf("%d",&m);
for (i=3;i<m/2+1;i++)
 if ((su(i)==1)&&(su(m-i)==1)) printf("%d %d\n",i,m-i);
 }