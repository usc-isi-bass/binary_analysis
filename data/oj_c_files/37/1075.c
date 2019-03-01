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


char c[100010];
int main()
{
	int n,i,j;
	scanf(" %d",&n);
	while(n--)
	{int flag=0;
		scanf("%s",c);
		int l=strlen(c);
		for(i=0;i<l;i++)
		{
			int num=0;
			for(j=0;j<l;j++)
			{
				if(c[j]==c[i]) num++;
			}
			if(num==1) {printf("%c\n",c[i]);flag=1;break;}
		}
		if(flag==0) printf("no\n");


	}

}