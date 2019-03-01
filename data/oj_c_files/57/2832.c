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
	char str[MAX][20];
	int i,length,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		length=strlen(str[i]);
		if(str[i][length-1]=='g'){
			str[i][length-3]='\0';
		}
		else
			str[i][length-2]='\0';

		printf("%s\n",str[i]);
	}
	return 0;
}

