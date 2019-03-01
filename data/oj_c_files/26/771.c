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
	int q,i;
	int k[100]={0};
	char str[100];
	gets(str);
	char *p=NULL;
	p=str;
	for(i=0;p[i];i++)
	{
		if(p[i]==' '&&p[i+1]==' ')
		{
			k[i+1]=1;
		}
		if(k[i]!=1)
		cout<<p[i];
	}
	
	
	cin>>q;
	return 0;
}