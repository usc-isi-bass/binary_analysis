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
{int w,i,m=0;
int a[12]={12,31,28,31,30,31,30,31,31,30,31,30};
int b[12];
scanf("%d",&w);
for(i=0;i<12;i++)
{b[i]=(w+a[i])%7;
w=b[i];
if(b[i]==5){printf("%d\n",i+1);}
}
}