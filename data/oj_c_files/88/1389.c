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
	int a,b,i,j,c,d=0,e,f,g;
	char *str,ch[30];
	str=ch;
	gets(str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if(*(str+i)>='0' && *(str+i)<='9') printf("%c",*(str+i));
		else if(*(str+i-1)<'0' || *(str+i-1)> '9'|| i==0) continue;
		else{ printf("\n");d++;}
	}
	return 0;
}
