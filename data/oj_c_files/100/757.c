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
	char zimu[]="abcdefghijklmnopqrstuvwxyz",str[300];
	int i,j,a[26]={0},n,q=0;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			if(str[j]==zimu[i])
				a[i]=a[i]+1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",zimu[i],a[i]);
			q=1;
		}
		
	}
	if(q==0)
		printf("No");
	return 0;
}
