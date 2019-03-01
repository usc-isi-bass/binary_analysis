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
	char former[50];
	int n,j,i;
	int q[50];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(former);
		q[i]=strlen(former);
		if(former[q[i]-1]=='y'||former[q[i]-1]=='r')
		{
			for(j=0;j<q[i]-2;j++)
				printf("%c",former[j]);
		}
	    if(former[q[i]-1]=='g')
		{
			for(j=0;j<q[i]-3;j++)
				printf("%c",former[j]);
		}
		if(i!=0&&i!=n)
			printf("\n");
	}
	return 0;
}