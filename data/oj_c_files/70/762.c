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
	int n,i,j;
	double s[200][2],k,max=0,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			k=(s[i][0]-s[j][0])*(s[i][0]-s[j][0])+(s[i][1]-s[j][1])*(s[i][1]-s[j][1]);
			y=sqrt(k);
            
			if(y>max)
				max=y;
		}
		
		printf("%.4lf\n",max);
		return 0;
		

}

