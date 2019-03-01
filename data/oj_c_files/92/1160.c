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

int pfCompare(void const *elem1, void const *elem2)
{
    return *(int*)elem2 -*(int*)elem1;
}
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(0 == n)
			break;
		else
		{
			int m = 0,p = 0,q = 0;
			int *a = (int *)malloc(n* sizeof(int));
			int *b = (int *)malloc(n* sizeof(int));
			int i = 0;
			while(i<n)
			{
				scanf("%d",&a[i]);
				i++;
			}
			i = 0;
			while(i<n)
			{
				scanf("%d",&b[i]);
				i++;
			}
			qsort(a,n,sizeof(int),pfCompare);
			qsort(b,n,sizeof(int),pfCompare);
			i = 0;
			while(i<n)
			{
				if(a[i]>b[i])
				{
					m++;
				}
				else if(a[i]<b[i])
				{
					while(a[n-1]>b[n-1])
					{
						m++;
						n--;
					}
					
						p++;
					q = n-1;
					while(q>i)
					{
						a[q] = a[q-1];
						q--;
					}
				}
				else
				{
						while(a[n-1]>b[n-1])
					{
						m++;
						n--;
					}
						if(a[i]!=a[n-1])
			         {
				    q = n-1;
					while(q>i)
					{
						a[q] = a[q-1];
						q--;
					}
					p++;
						}
						else 
						break;
				}
			i++;
			}
			int l = 200 * m - 200 * p;
			printf("%d\n",l);
		}

	}
	return 0;
}
