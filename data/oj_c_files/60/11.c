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

int sushu(int k)
{int i;
for(i=2;i<=sqrt(k);i++)
if(k%i==0)break;
if(i>sqrt(k)) return 1;
else return 0;
}
int main()
{int n,i,b=0;
	scanf("%d",&n);
for(i=2;i<=n-2;i++)
if(sushu(i)&&sushu(i+2)){printf("%d %d\n",i,i+2);b=1;}
if(b==0)printf("empty");

}