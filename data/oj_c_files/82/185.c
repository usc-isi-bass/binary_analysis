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
	int n,max[100],min[100];
	int i,j,t=0,tr=0;
	scanf("%d",&n);
	for(i=0,j=0;i<n;i++)
	{
		scanf("%d %d",&max[i],&min[i]);
		if(max[i]<=140&&max[i]>=90&&min[i]>=60&&min[i]<=90)
		{
			t++;
		}
		else
			t=0;
		if(t>=tr)
			tr=t;
	}
	printf("%d",tr);
	return 0;
}
