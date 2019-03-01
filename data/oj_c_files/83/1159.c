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
    int i,sum1=0,n,c[10],shiji[10];
float g[10] ,shidejidian[10],sum2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
		sum1+=c[i];}
	for(i=0;i<n;i++)	{scanf("%d",&shiji[i]);
	if(shiji[i]>89)g[i]=4.0;
	else if(shiji[i]>84)g[i]=3.7;
	else if(shiji[i]>81)g[i]=3.3;
	else if(shiji[i]>77)g[i]=3.0;
	else if(shiji[i]>74)g[i]=2.7;
	else if(shiji[i]>71)g[i]=2.3;
	else if(shiji[i]>67)g[i]=2.0;
	else if(shiji[i]>63)g[i]=1.5;
	else if(shiji[i]>59)g[i]=1.0;
	else g[i]=0;
	shidejidian[i]=g[i]*c[i];
	sum2+=shidejidian[i];}
	printf("%.2f",(float)sum2/sum1);





}