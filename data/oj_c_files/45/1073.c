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
	char s[51],w[51];
    scanf("%s %s",s,w);
	int i=0,j=0,slen=strlen(s),wlen=strlen(w);
	while(i<slen&&j<wlen)
	{
		if(s[i]==w[j]) 
			i++,j++;
		else
		{
			j=j-i+1;
			i=0;
		}
	}
	if(i>=slen) 
		printf("%d\n",j-i);
}