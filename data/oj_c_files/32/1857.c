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
	int flag2,flag,j,k,lengtha,lengthb,n,i;
	char temp,a[100],b[100];
	flag=0;
	flag2=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (flag2) temp=getchar();
		else flag2=1;
		scanf("%s",a);
		scanf("%s",b);
		lengtha=strlen(a);
		lengthb=strlen(b);
		for (j=1;j<=lengthb;j++)
		{
			a[lengtha-j]=a[lengtha-j]-b[lengthb-j]+48;
			k=lengtha-j;
			while (a[k]<48)
			{
				a[k]=a[k]+10;
				a[k-1]--;
				k--;
			}
		}		
		if (flag) printf("\n");
		else flag=1;
		printf("%s",a);

	}
}