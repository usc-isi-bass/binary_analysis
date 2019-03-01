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
	char str[51][10];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		if(str[i][strlen(str[i])-1]=='y'||str[i][strlen(str[i])-1]=='r')
			str[i][strlen(str[i])-2]='\0';
		else str[i][strlen(str[i])-3]='\0';
	}
	for(i=0;i<n;i++)
		printf("%s\n",str[i]);
}
