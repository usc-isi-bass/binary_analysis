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
	int n,i,j,p,q,k;
	char a[100][100],b[100][100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		getchar();
		gets(a[i]);
		gets(b[i]);
	}
	for (i=0;i<n;i++)
	{
		p=strlen(a[i]);
		q=strlen(b[i]);
		for (j=0;j<q;j++)
		{
			if (a[i][p-j-1]>=b[i][q-j-1])
				a[i][p-j-1]=a[i][p-j-1]-b[i][q-j-1]+48;
			else
			{
				a[i][p-j-1]=a[i][p-j-1]-b[i][q-j-1]+58;
				if (a[i][p-j-2]!=48)
					a[i][p-j-2]=a[i][p-j-2]-1;
				else
				{
					a[i][p-j-2]=57;
					for (k=3;;k++)
					{
						if (a[i][p-j-k]!=48)
						{
							a[i][p-j-k]--;
							break;
						}
						else
							a[i][p-j-k]=57;
					}
				}
			}
		}
		puts(a[i]);
	}
}