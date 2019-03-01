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

static int cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}
int main()
{
	int n,a[1000]={0},b[1000]={0},t,s,j,p,c,tk,tm,qk,qm;
	for(;;)
	{
		scanf("%d",&n);
		if (n==0) break;
		t=0;
		p=0;
		j=0;
		s=0;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		tk=0;
		tm=n-1;
		qk=0;
		qm=n-1;
		for (;tk<=tm;)
		{
			if (a[tm]>b[qm])
			{
				t++;
				tm--;
				qm--;
			}
			else if(a[tm]<b[qm])
			{
				s++;
				tm--;
				qk++;
			}
			else if(a[tk]>b[qk])
			{
				t++;
				tk++;
				qk++;
			}
			else if (a[tk]<b[qk])
			{
				s++;
				tm--;
				qk++;
			}
			else if(a[tm]<b[qk])
			{
				s++;
				tm--;
				qk++;
			}

			else
			{
				tm--;
				qk++;
			}
		}
		printf("%d\n",t*200-s*200);
	}
	return 0;
}