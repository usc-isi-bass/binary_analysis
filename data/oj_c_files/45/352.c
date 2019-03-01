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
	char s[50],w[50];
	int i,j,len,flag=0;
	scanf("%s %s",s,w);
	len=strlen(s);
	for(i=1;w[i]!='\0';i++)if(s[0]==w[i])
	{
		for(j=1;j<len;j++)if(s[j]!=w[i+j])goto label;
		printf("%d",i);break;
		label:;
	}
	return 0;
}