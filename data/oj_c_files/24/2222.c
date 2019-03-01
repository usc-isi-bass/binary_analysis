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
	char c[4000]={'0'};
	gets(c);
	int i,j,l,max[3],min[3];
	max[0]=0;
	min[0]=100;
	for(i=0;i<=3999&&c[i]!='\0';i++)
	{
		if(c[i]!=','&&c[i]!=' ')
		{
            l=0;
			for(j=i;j<=3999;j++)//zheli
			{
				if(c[j]==','||c[j]==' '||c[j]=='\0') break;
			}
			l=j-i;
            if(l>max[0]) { max[0]=l;max[1]=i;max[2]=j-1;}
			if(l<min[0]) { min[0]=l;min[1]=i;min[2]=j-1;}
			i=j;
		}
		else continue;
	}
    int k;
	for(k=max[1];k<=max[2];k++)
		printf("%c",c[k]);
	printf("\n");
	for(k=min[1];k<=min[2];k++)
		printf("%c",c[k]);
}


    