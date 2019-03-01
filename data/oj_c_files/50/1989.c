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
{int w,f,z,i;
int a[13]={0,0,31,28,31,30,31,30,31,31,30,31,30};
scanf("%d",&w);
i=1;f=12;
while(i<=12)
{f=f+a[i];
f=f%7;
if(f+w==7) z=7;
else z=(f+w)%7;
if( z==5) printf("%d\n",i);
i++;
}
 

 
 return 0;
}