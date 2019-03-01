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

struct distant 
{
	double cross;
	double line;
}point[1000];
int main()
{
	int n,i,j,k=0;
	double s[1000]={0};
	double c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
			scanf("%lf %lf",&point[i].cross,&point[i].line);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++,k++)
			s[k]=sqrt((point[i].cross-point[j].cross)*(point[i].cross-point[j].cross)+(point[i].line-point[j].line)*(point[i].line-point[j].line));
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(s[i]<s[j])
			{
				c=s[i];
				s[i]=s[j];
				s[j]=c;
			}
		}
		i++;
	}
	 printf("%.4lf\n",s[0]);
	return 0;
}