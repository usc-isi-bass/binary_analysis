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
	char s[100],l[100]; 
	
	char *p,*a; 
	int i;

	scanf("%s%s",s,l);

	p=strstr(l,s);
	a=l;
	for(i=0;;i++)
	{
		if(a+i==p)
		{
			printf("%d",i);
			break;
		}
	}
	return 0; 
} 