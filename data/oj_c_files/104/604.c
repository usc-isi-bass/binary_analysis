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
	int n;
	int i,j;
	int a1,a2;
	scanf("%d",&n);
	int a[100];
	a[0]=n;


	for(i=0;;i++)
	{if (a[i]==1) break;
	//printf("%d",i);
	//printf(" %d\n",a[i]);
	a[i+1]=a[i]/2;
	}

	int m;
	scanf("%d",&m);
	int b[100];
	b[0]=m;


	for(j=0;;j++)
	{if (b[j]==1) break;
	//printf("%d",i);
	//printf(" %d\n",b[i]);
	b[j+1]=b[j]/2;
	}


	//printf("\n\n\n\n");
	//for(i=0;i<=99;i++)
	//printf("%d %d\n",a[i],b[i]);

	int flag;
	flag=0;
	for(a1=0;a1<=i;a1++)
		if (flag==0)
		for(a2=0;a2<=j;a2++)
			if (flag==0)
			if(a[a1]==b[a2]) {printf("%d\n",a[a1]); flag=1;}
	
}