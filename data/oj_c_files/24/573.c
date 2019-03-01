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
	char s[50],jl[50],il[50];int i=100,j=0;
	while(scanf("%s",s)!=EOF)
	{
		if(strlen(s)>j){strcpy(jl,s);j=strlen(s);}
		if(strlen(s)<i){strcpy(il,s);i=strlen(s);}
	}
	printf("%s\n%s",jl,il);
}
		

