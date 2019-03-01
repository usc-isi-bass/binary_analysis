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
	int i,n,len;
	char dc[55][35];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",dc[i]);
		len=strlen(dc[i]);
		if(dc[i][len-1]-'r'==0&&dc[i][len-2]-'e'==0)
			dc[i][len-2]='\0';
		else if(dc[i][len-1]-'y'==0&&dc[i][len-2]-'l'==0)
			dc[i][len-2]='\0';
		else if(dc[i][len-1]-'g'==0&&dc[i][len-2]-'n'==0&&dc[i][len-3]-'i'==0)
			dc[i][len-3]='\0';
		printf("%s\n",dc[i]);
	}
	return 0;
}

