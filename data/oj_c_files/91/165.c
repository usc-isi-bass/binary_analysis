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
	char zifu[101],qinpeng[101];
	int i,len;
	char *p1;
	char *p2;
	gets(zifu);
	len=strlen(zifu);
    p1=&zifu[0];
	p2=&qinpeng[0];
	for(i=0;i<len-1;i++)
	{
		*(p2+i)=*(p1+i)+*(p1+i+1);
	}
	*(p2+len-1)=*p1+*(p1+len-1);
	for(i=0;i<len;i++)
	{
		printf("%c",*(p2+i));
	}
}
		
