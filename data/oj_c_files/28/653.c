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

void main()
{
	char str[20000]={" "},s[20001]={"  "};
	int begin[301],end[301];	
	int i,p=0,q=0,j;
	gets(str);
	strcat(str,s);
	strcat(s,str);
	j=strlen(s);
	for(i=1;i<j-1;i++)
	{
		if(s[i]!=' '&&s[i-1]==' ')
		{
			begin[p]=i;
			p++;
		}
		if(s[i]!=' '&&s[i+1]==' ')
		{
			end[q]=i;
			q++;
		}
	}
	for(i=0;i<p-1;i++)
		printf("%d,",end[i]-begin[i]+1);
	printf("%d",end[p-1]-begin[p-1]+1);
}