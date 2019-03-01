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
	int n,i;
	scanf("%d",&n);
	char ml[256],*ps;
	for(i=0;i<n;i++){
		scanf("%s\n",ml);
		for(ps=ml;*ps!='\0';ps++){
			if(*ps=='A')
				*ps='T';
			else if(*ps=='T')
				*ps='A';
			else if(*ps=='C')
				*ps='G';
			else
				*ps='C';
		}
		puts(ml);
	}
}

