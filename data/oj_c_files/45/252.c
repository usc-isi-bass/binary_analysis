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
{char a[50],b[50];
int i,j=0,x,y;
scanf("%s%s",a,b);
x=strlen(a);
for(i=0;i<50;i++)
{if(b[i]==a[j])
j++;
if(j>(x-1)&&j!=0)break;
}
printf("%d",i+1-x);
}
