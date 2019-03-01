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
    int n,as[500],k[500];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(as[i]));
	}
	for(int j=0;j<n;j++)
	{
		for(int t=0;t<n-j;t++)
		{
			if(as[t]>as[t+1])
			{
				int e=as[t+1];
				as[t+1]=as[t];
				as[t]=e;
			}
		}
	}
	int y=0;
	for(int g=0;g<n;g++)
	{
		if(as[g]%2!=0)
		{
			k[y]=as[g];
			y++;
		}
	}
	for(int a=0;a<y;a++)
	{
		if(a!=y-1)
			printf("%d,",k[a]);
		else
			printf("%d",k[a]);
	}
	return 0;
}




