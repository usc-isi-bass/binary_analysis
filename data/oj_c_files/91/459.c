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
    int i,j,m;
    char a[100],c[100];
    for(i=0;i<100;i++)
   { scanf("%c",&a[i]);
   if(a[i]=='\n')
   break;}
for(j=0;j<i-1;j++)
{c[j]=a[j]+a[j+1];}
c[i-1]=a[0]+a[i-1];
for(m=0;m<i;m++)
   {
    printf("%c",c[m]);}
      return 0;}