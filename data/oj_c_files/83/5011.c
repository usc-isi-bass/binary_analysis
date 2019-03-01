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
	int n,cre[10]={0},gra[10]={0},i;
	float poi[10]={0},sum=0,gpa,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&cre[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&gra[i]);
		if(gra[i]<60)
			poi[i]=0;
		else if(gra[i]<64)
			poi[i]=1.0;
		else if(gra[i]<68)
			poi[i]=1.5;
		else if(gra[i]<72)
			poi[i]=2.0;
		else if(gra[i]<75)
		poi[i]=2.3;
		else if(gra[i]<78)
		poi[i]=2.7;
		else if(gra[i]<82)
			poi[i]=3.0;
		else if(gra[i]<85)
			poi[i]=3.3;
		else if(gra[i]<90)
			poi[i]=3.7;
		else
			poi[i]=4.0;
		sum+=cre[i]*poi[i];s+=cre[i];
	}
	gpa=sum/s;
	printf("%.2f",gpa);
	return 0;
}