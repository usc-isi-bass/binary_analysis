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
	char a[300];
	char *p;
	int b[26],i ,len;
	for(i=0;i<26;i++)
	b[i]=0;
	gets(a);
	len=strlen(a);
	for(p=a;p<(a+len);p++)
		for(i=0;i<26;i++)
			if(*p=='a'+i) b[i]++;len=0;
	for(i=0;i<26;i++)
	if(b[i]!=0)
	{printf("%c=%d\n",'a'+i,b[i]);len++;}
	
	if(len==0)
    printf("No");
	}
