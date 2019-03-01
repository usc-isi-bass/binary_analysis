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
	char s[50],w[50],c[50];
	int len1,len2,i,j;
	cin>>s>>w;
	len2=strlen(w);
    len1=strlen(s);
	for(i=0;i<len2;i++)
	{
		for(j=i;j<i+len1;j++)
		{
			c[j-i]=w[j];
		}
		c[j-i]='\0';
		if(strcmp(s,c)==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}