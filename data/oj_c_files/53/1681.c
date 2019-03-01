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
		int n;
		scanf("%d",&n);
		int a[300];
		char c=',';
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
			for(i=0;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if(a[i]==a[j])
					{
						a[i]=0;
						break;
					}
				}
				if(a[i]!=0)
				{
					if(i==0)
					{
						printf("%d",a[i]);
					}
					else
					{
					printf("%c%d",c,a[i]);
					}
				
				}
			}
			return 0;
	}
		
			
			
							