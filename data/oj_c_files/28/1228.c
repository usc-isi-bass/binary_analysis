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
	char ch[60000];
    int i=0;
	gets(ch);
	int length=0;
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]==' ')
		length=0;
		else
		length=length+1;
		if(ch[i]!=' '&&ch[i+1]==' ')
		printf("%d,",length);
		if(ch[i]!=' '&&ch[i]!='\0'&&ch[i+1]=='\0')
		printf("%d",length);
	}
	
}


