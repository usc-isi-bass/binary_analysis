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
	int i,e,b,c,j;
	char a[1000];
	b=0;
	gets(a);
	e=strlen(a);
	b=a[0];
	for(i=0;a[i];i++){
		if(i==e-1){c=a[i]+b-96;
		a[i]='a'+c-1;}
		else {j=i+1;
		c=a[i]+a[j]-96;
		a[i]='a'+c-1;}
	}
	puts(a);
	return 0;
}