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
	char ZFC[105];
	int SZ[105];
	int n;
	int e=0,s=0;
	gets(ZFC);
	n=strlen(ZFC);
	for(int i=0;i<n;i++)
	{
		SZ[i]=ZFC[i]-48;
	}
	int a=SZ[0];
	for(int j=0;j<n-1;j++)
	{
		e=10*a+SZ[j+1];
		s=e/13;
		a=e%13;
		if(j==0&&s==0)
		{
			continue;
		}
		if(j<n-2)
		{
			printf("%d",s);
		}
		else if(j==n-2)
		{
			printf("%d\n",s);
			printf("%d\n",a);
		}
	}

	if(n==1)
	{
	printf("0\n");
	printf("%d\n",SZ[0]);	
	}
	if(n==2&&SZ[0]*10+SZ[1]<13)
	{
	printf("0\n");
	printf("%d\n",SZ[0]*10+SZ[1]);	
	}
	//scanf("%d",&n);
	return 0;
}
