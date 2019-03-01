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
	int i,m,n;
	char str[100],string[100]={""};
	gets(str);
	n=strlen(str);
	for(i=0;str[i]!='\0',i<n-1;i++)
	{
		if((str[i]==' ')&&(str[i+1]==' '))
	{
			for(m=i;m<n-1;m++)
     str[m]=str[m+1];
	n--;
	i=0;
	}
	}
	strncpy(string,str,n);
	printf("%s",string);
	return 0;
}
