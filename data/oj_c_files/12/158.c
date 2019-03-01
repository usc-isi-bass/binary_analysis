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
	int i,j,m,n,a,result[20]={0};
	double num[15];
	scanf("%lf",&num[0]);
	for(a=1;num[0]!=-1;a++)
	{
    	for(i=1;;i++)
		{
			scanf("%lf",&num[i]);
		    if(num[i]==0) break;	
		}
        for(j=0;j<i;j++)
		{
			for(m=0;m<=i;m++)
		    if(num[m]/num[j]==2) result[a]++;
		}
		scanf("%lf",&num[0]);
	}
	for(j=1;j<a;j++) printf("%d\n",result[j]);
	return 0;
}


    
			

