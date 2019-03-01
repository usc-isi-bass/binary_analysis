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

int main(int argc, char* argv[])
{
	char c[100],ans[100]={0};
	gets(c);
	int n=strlen(c),i=0;
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{ans[i]=c[i]+c[i+1];}
		else ans[i]=c[i]+c[0];
		printf("%c",ans[i]);
	}
	return 0;
}
