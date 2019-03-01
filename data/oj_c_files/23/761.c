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
	char str[100],word[20][50]={'\0'};
	gets(str);
	int i,n,j=0,s=0;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ') {word[j][s]=str[i];s++;}
		else {j++;s=0;}
	}
	for(i=j;i>0;i--)
		printf("%s ",word[i]);
	printf("%s",word[0]);
}
