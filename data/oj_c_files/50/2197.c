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
{int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k,n,di;
scanf("%d",&n);
di=12;
for(i=0;i<12;i++)
{di=di+m[i];
j=(di+n)%7;
if(j==5)printf("%d\n",i+1);

	}



getchar();
getchar();
getchar();
}
