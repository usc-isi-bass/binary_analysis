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

int main(int argc, char* argv[])
{
	char a[100],b[100],c[100];
	int k,i,j,f,l,t=0;
	scanf("%s %s",a,b);
	k=strlen(b);
	l=strlen(a);
	for(i=0;i<k;i++)
	{
		f=0;t=0;c[t]=0;
		if(b[i]==a[0])
		{
			f=i;
			for(j=i;j<i+l;j++)
			{
				c[t]=b[j];
				t=t+1;
			}
			c[t]='\0';
			if(strcmp(c,a)==0)
			{printf("%d",f);
			break;}
		}
	}
	return 0;
}

