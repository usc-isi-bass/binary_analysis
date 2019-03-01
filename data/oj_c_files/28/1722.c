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
	char x[10000];
	int i,k=0,q=0;
	int n[1000]={0};
	gets(x);
	char *p;
	for(p=x;*p!='\0';p++)
	{
		if(*p!=' ')
		{
			k++;
			if((*(p+1)==' ')||(*(p+1)=='\0'))
		    {
			    n[q]=k;
			    k=0;
			    q++;
		    }
		}
	}
	for(i=0;i<1000;i++)
	{
		if(((n[i])!=0)&&((n[i+1])!=0))
		{
			printf("%d,",(n[i]));
		}
		if(((n[i])!=0)&&((n[i+1])==0))
		{
			printf("%d",(n[i]));
		}
	}
	return 0;
}

