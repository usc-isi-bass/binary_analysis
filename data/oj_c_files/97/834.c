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
	int n,a;
	int sz[6];
	int money[6]={100,50,20,10,5,1};
	scanf("%d",&n);
	a=n;
	for(int i=0;i<6;i++){
		sz[i]=a/(money[i]);
		a=a%(money[i]);
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",sz[0],sz[1],sz[2],sz[3],sz[4],sz[5]);
	return 0;
}