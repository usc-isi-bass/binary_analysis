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
	char str1[101],str2[101];
	memset(str1,0,101*sizeof(char));
	memset(str2,0,101*sizeof(char));
	gets(str1);
	int len=strlen(str1);
	int i;
	for(i=1;i<=len-1;i++)
	{
		str2[i-1]=str1[i-1]+str1[i];
	}
	str2[len-1]=str1[len-1]+str1[0];
	printf("%s\n",str2);
}
