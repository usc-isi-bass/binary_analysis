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
	int n,len,i,j;
	char s[20],t[3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		len=strlen(s);
		t[0]=s[len-3];
		t[1]=s[len-2];
		t[2]=s[len-1];
		if(t[0]=='i')
		{
		for(j=0;j<len-3;j++)
				printf("%c",s[j]);
		printf("\n");
		}
		else
		{
	      for(j=0;j<len-2;j++)
				printf("%c",s[j]);
		  printf("\n");
		}
	}
}