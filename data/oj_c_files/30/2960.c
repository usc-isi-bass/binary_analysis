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


int xiangguan(int n)
{if(n%7==0)
 return(0);
 else if(n%10==7||n/10==7)
 return(0);
 else return(1);
}

int main()
{int n;
 scanf("%d",&n);
 int i,sum=0;
 for(i=1;i<=n;i++)
 if(xiangguan(i)) 
 sum+=i*i;
 printf("%d",sum);
}