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
   char a[50][100],max[100],min[100];
int i,n;
   for(i=0;i<50;i++)
   {
     scanf("%s",a[i]);
     }
   n=i;strcpy(max,a[0]);strcpy(min,a[0]);
   for(i=0;i<n;i++)
{if(strlen(a[i])==0)break;
    if(strlen(max)<strlen(a[i]))strcpy(max,a[i]);
   if(strlen(min)>strlen(a[i]))strcpy(min,a[i]);
}
  printf("%s\n%s\n",max,min);
}
