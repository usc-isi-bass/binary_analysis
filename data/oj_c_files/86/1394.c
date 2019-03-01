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
	int n,m,t=0,num,i,j,k=0,p=1,q=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		p=1;
		k=0;
		for(j=0;j<m;j++)
		{
			scanf("%d",&num);
			k++;
			t=num+3*k;
			if(t>=60&&t-3<=60&&p==1){printf("%d\n",num);p=0;}
			if(t-3>=60&&p==1){printf("%d\n",60-(k-1)*3);p=0;}
		}
		if(t-3<=60&&p==1){printf("%d\n",60-3*k);p=0;}
	}
	return 0;
}