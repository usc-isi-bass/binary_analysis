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


int tj[1000],qw[1000];

int main(){
	//freopen("data.txt","r",stdin);
	int n,i,j,w,win,c,m;
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++)
			scanf("%d",tj+i);
		for(i=0;i<n;i++)
			scanf("%d",qw+i);
		sort(tj,tj+n);
		sort(qw,qw+n);
		m=-n;
		for(i=0;i<n;i++)
		{
			c=-i;
			for(j=i,w=0;j<n&&tj[j]>=qw[w];j++,w++)
				if(tj[j]>qw[w])
					c++;
			if(j==n&&c>m)
				m=c;
		}
		printf("%d\n",m*200);
	}
	return 0;
}
