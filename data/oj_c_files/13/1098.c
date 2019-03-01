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
	int n,i;
	int a[20005],mark[100]={0},print=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",a+i);
	for(i=0;i<n;i++){
		if(mark[a[i]]==1)continue;
		else{
			if(print)printf(" ");
			printf("%d",a[i]);
			print=1;
			mark[a[i]]++;
		}
	}
	putchar(10);
}
