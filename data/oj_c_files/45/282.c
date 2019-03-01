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

void main()
{
 char a[80],b[80];
 int la,lb,i,j,k,c;
 scanf("%s %s",a,b);
 la=strlen(a);lb=strlen(b);
 for(i=0;i<lb;i++)
 {
  if(b[i]==a[0])
  {
   for(j=i,k=0;j<lb,k<la;k++,j++)
   {
    if(a[k]=b[j]) c=c+1;
	else break;
   }
   if(c=la)
   {
    printf("%d\n",i);
	break;
   }
  }
 }
}