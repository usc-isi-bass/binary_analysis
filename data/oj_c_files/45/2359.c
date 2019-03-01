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

int dingwei(char s[],char w[])
{
	int len,i,j;
	len=strlen(s);
	for(i=0;;i++)
	{
		for(j=0;j<len&&s[j]==w[i+j];j++)
			;
		if(j==len)
			return i;
	}
}
main()
{
	char c1[51]={'\0'},c2[51]={'\0'};
	scanf("%s%s",c1,c2);
	printf("%d\n",dingwei(c1,c2));
	return 0;
}