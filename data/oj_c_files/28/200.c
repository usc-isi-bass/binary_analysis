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
	char s[9000];
	int i=0,t=0,j=0;
	gets(s);
	while(s[i]!='\0')
	{
	     if(s[i]!=' ')
			 j++;
		 else
		 {
			 if(j!=0)
			    printf("%d,",j);
			 j=0;
		 }
		 i++;
	}
	
	printf("%d",j);
}
