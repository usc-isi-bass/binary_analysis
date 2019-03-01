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
	char s[1000],w[1000];
	scanf("%s%s",s,w);
	int sn=strlen(s);
	int wn=strlen(w);
	int pos=0;
	int i;
	for(i=0;i<wn;i++)
	{
		if(pos==sn-1)
			break;
		if(w[i]==s[pos]) pos++;
		else pos=0;
	}
	printf("%d",i-pos);

	return 0;
}