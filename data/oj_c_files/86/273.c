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
	int n,i,k,m[100],c[100],s[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m[i]);
		if(m[i]==0)
		{
			s[i]=60;
		}
		else
		{
		    for(k=1;k<=m[i];k++)
			{
		    	scanf("%d",&c[k]);
			}
			for(k=1;k<=m[i];k++)
			{
				if((c[k]+(k-1)*3>=57)&&(c[k]+(k-1)*3<=60))
				{
					s[i]=c[k];
					k=k+m[i];
				}
				else
				{
				    if(c[k]+(k-1)*3>60)
					{
						s[i]=c[k]-(c[k]+(k-1)*3-60);
						k=k+m[i];
					}
					else
					{
						if(k==m[i])
						{
						s[i]=60-3*k;
						}
					}
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",s[i]);
	}
	return 0;
}