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
	char s[200][100]={'\0'},*ps;
	int n,i,max=0,t[200]={0},min=1000,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",*(s+i));
	for(i=0;i<n;i++)
		t[i]=strlen(*(s+i));
	for(i=0;i<n;i++)
	{
		if(*(t+i)>max)
			max=*(t+i);
		if(*(t+i)<min)
			min=*(t+i);
	}
	for(i=0;i<n;i++)
		if(t[i]==max)
		{
			printf("%s\n",s[i]);
			break;
		}
	for(i=0;i<n;i++)
		if(t[i]==min)
		{
			printf("%s",s[i]);
			break;
		}
}
