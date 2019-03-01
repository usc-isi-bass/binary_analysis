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

/* Note:Your choice is C IDE */
void main()
{
	int i,j,x;
	char temp,a[100],b[100];
	scanf("%s %s",&a,&b);
	if ((x=strlen(a))!=strlen(b)) printf("NO");
	else
	{
		for (i=0;i<x-1;i++)
		{
			for (j=i+1;j<x;j++)
			{
				if (a[i]>a[j])
				{
					temp=a[i];a[i]=a[j];a[j]=temp;
				}
				if (b[i]>b[j])
				{
					temp=b[i];b[i]=b[j];b[j]=temp;
				}
			}
			if (a[i]!=b[i]) break;
		}
		if (i==x-1) printf("YES");
		else printf("NO");
	}
}