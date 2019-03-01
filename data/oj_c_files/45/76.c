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
    char s[50],w[50];
	scanf("%s%s",s,w);

	int c,d;
	c=strlen(s);
	d=strlen(w);
	int i;
	for(i=0;i<c;i++)
	{
		if(s[0]==w[i]&&s[1]==w[i+1])
		break;
	}printf("%d",i);



	return 0;
}
