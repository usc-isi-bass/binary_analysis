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
	int i,j,k,la,lb,f=0;
	
	char a[300],b[300],c[300],tem[300];
	gets(a);
	gets(b);
	gets(c);


	la=strlen(a);
	lb=strlen(b);

	for(i=0;i<la;i++)
	{k=0;
		for(j=i;j<lb+i;j++)
		{
			
			tem[k++]=a[j];
			if(j==lb+i-1)tem[k]=0;
		}
		if(!strcmp(tem,b)&&f==0)
		{f++;
			printf("%s",c);i+=lb-1;
		}
		else printf("%c",a[i]);
	}
}