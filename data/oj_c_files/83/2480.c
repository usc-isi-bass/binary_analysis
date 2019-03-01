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
	int n,a[11],c[11],i,j,k=0;
	float b[11],GPA,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		k=k+a[i];
	}
	for(j=1;j<=n;j++)
	{
		scanf("%d",&c[j]);
		if(c[j]>=90)
			b[j]=4.0;
		else
			if(c[j]>=85)
				b[j]=3.7;
			else
				if(c[j]>=82)
					b[j]=3.3;
				else
					if(c[j]>=78)
						b[j]=3.0;
					else
						if(c[j]>=75)
							b[j]=2.7;
						else
							if(c[j]>=72)
								b[j]=2.3;
							else
								if(c[j]>=68)
									b[j]=2.0;
								else
									if(c[j]>=64)
										b[j]=1.5;
									else
										if(c[j]>=60)
											b[j]=1.0;
										else
											b[j]=0;
										m=m+b[j]*a[j];
	}
	GPA=(float)m/k;
	printf("%.2lf",GPA);
}



