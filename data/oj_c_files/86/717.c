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
	int n,i,a[100],b[100],sum,j,m;
	scanf("%d",&n);
    for(j=0;j<n;j++)
	{
		scanf("%d",&m);
		a[0]=0;
        if(m==0)
		{
            sum=60;
		}
		else
		{
	        for(i=1;i<=m;i++)
			{
		        scanf("%d",&a[i]);
		        b[i]=3*i+a[i];
			}
			for(i=1;i<=m;i++)
			{
				if(b[m]<60)
				{
					sum=a[m]+60-b[m];
				}
				else
				{
		            if(b[i]>60)
					{
					    sum=a[i-1]+60-b[i-1];
				        if(i<=m&&60-sum>a[i]-a[i-1])
						{
							sum=a[i];
							break;
						}
				        else 
						{
					        break;
						}
					}
                    else if(b[i]==60)
					{
						sum=60;
					}

				    else
					{
					    continue;
					}
				}
			}
		}
	printf("%d\n",sum);
	}
	return 0;
}
