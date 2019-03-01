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
	int max,sec=-1,temp;
	scanf("%d",&temp);
	getchar();
	max=temp;
	while(scanf("%d",&temp)!=EOF)
	{
		getchar();
		//if(temp==0) break;
		if(temp>max)
		{
			sec=max;
			max=temp;
			continue;
		}
		else if(temp<max && temp>=sec) sec=temp;
	}
	if(sec==max || sec==-1) printf("No\n");
	else printf("%d\n",sec);

	
}