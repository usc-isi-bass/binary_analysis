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
    double a[10][10];
    double b = -10000, e=100000;
    int m, n, i, j, k;
    int c=-1, d=-1, l=-1;
	scanf("%d,%d", &m, &n);
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{scanf("%lf", &a[i][j]);}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>b)
			{
			  b = a[i][j];
			  c = j;
			}
		}
		for(k=0;k<m;k++)
		{
			if(e>=a[k][c]){
				e=a[k][c];
			    l = k;
			}
			
		}
		if(b==e&&i==l)
		{
                      d=i;
		    break;
                   }
		
		
	}
	
		if(c!=-1&&d!=-1)
		{
			printf("%d+%d", d, c);
		}
		else {
                            printf("No");
                        }
	return 0;
}
