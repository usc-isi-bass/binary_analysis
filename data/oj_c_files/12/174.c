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

int main(){
	int a[100][100],t=0,i,j,k,num;
	for(i=0;i<100;i++)
{   
		scanf("%d",&a[t][i]);
		if(a[t][i]==0) t++;
	else if(a[t][i]==-1) break;
	}

for(k=0;k<t;k++)
{   
	num=0;  
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(a[k][j]==2*a[k][i]&&a[k][i]!=0)
				num++;
		}
	}
	printf("%d\n",num);
}
	return 0;
}
