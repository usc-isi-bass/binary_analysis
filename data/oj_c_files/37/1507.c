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
    int t,i,j,count=0,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		char a[100005];
		int b[100005];
		for(j=0;j<100005;j++)
			b[j]=0;
        scanf("%s",a);
		for(j=0;j<strlen(a);j++)
		{
			for(k=j+1;k<strlen(a);k++)
			{
				if(a[j]==a[k])
				{
					b[j]++;
					b[k]++;
				}
			}
		}
		for(j=0;j<strlen(a);j++)
		{
			if(b[j]==0){
				printf("%c\n",a[j]);
				break;}
		}
		if(j==strlen(a))
			printf("no\n");
	}
	return 0;
}