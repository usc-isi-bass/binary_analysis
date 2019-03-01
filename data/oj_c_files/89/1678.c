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

int data[100000];
int main()
{
	int n,x,y;
	scanf("%d",&n);
	while(1)
	{
		scanf("%d%d",&x,&y);
		if(x+y==0)break;
		data[x]=-1;
		if(data[y]>=0)data[y]++;
	}
	int i=n;
	while(n-->=0)if(data[n]==i-1){printf("%d\n",n);break;}
	if(n<0)printf("NOT FOUND\n");
	return 0;
}