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
void operate(int x);
int n;
scanf("%d",&n);
operate(n);
}

void operate(int x)
{
int y;
if(x==1){printf("End");return;}
else if(x%2==1){y=x;x=x*3+1;printf("%d*3+1=%d\n",y,x);}
else if(x%2==0){y=x;x=x/2;printf("%d/2=%d\n",y,x);}
operate(x);
}