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
	int i,a,n,t;
	int f[25]={1,1};
	int b[20];
	scanf("%d",&n);
	for(i=2;i<25;i++)
    f[i]=f[i-2]+f[i-1];
	for(i=0;i<n;i++){
	scanf("%d",&a);
	b[i]=a-1;}
    for(i=0;i<n;i++)
	{
		t=b[i];
		printf("%d\n",f[t]);}
}
