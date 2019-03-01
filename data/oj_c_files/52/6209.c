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


trans(int a[],int m,int n)
{
	int temp;
	int i;
	if(m==1){
		temp=a[n-1];
		for(i=n-1;i>0;i--)
			a[i]=a[i-1];
		a[0]=temp;
	}
	else
	{
		trans(a,1,n);
		trans(a,m-1,n);
	}
	return 0;
}

		

main()
{
	int n,m;
	int a[110];
	int i;
	
	scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	trans(a,m,n);
	
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);
}