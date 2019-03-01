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

int pa(int n)
{int k=1,i;
for(i=2;i*i<=n;i++)
if(n%i==0){k=0;break;}
return k;
} 
int main()
{
	int n,k=1;
	scanf("%d",&n);
	for(int i=1;2*i+3<=n;i++)
	if(pa(2*i+1))if(pa(2*i+3))
	{
		k=0;printf("%d %d\n",2*i+1,2*i+3);
	} 
	if(k) printf("empty");
}