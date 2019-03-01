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

main()
{char substring[50],string[50];
 int i,j,len1,len2;
 char*p1=substring;
 char*p2=string;
 scanf("%s %s",substring,string);
 len1=strlen(substring);
 len2=strlen(string);
 for(i=0;i<len2;i++)
	{for(j=0;j<len1;j++)
	    if(*(p2+i+j)!=*(p1+j))break;
	if(j==len1)break;
	}
 printf("%d",i);
}