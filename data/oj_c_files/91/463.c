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


char *strqp(char *);

int main()
{
    char buffer[101]={0};
	gets(buffer);
	printf("%s\n",strqp(buffer));
	return 0;
}

char *strqp(char *str)
{
	int len;
	len=strlen(str);
    
	char *qp;
	qp=(char *)malloc(len+1);
	int index=0;
	for(index=0;index<len-1;index++)
		qp[index]=(str[index]+str[index+1]);
	qp[len-1]=str[len-1]+str[0];
	qp[len]='\0';
	return qp;
}