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
    char s[101];
	int i,k;
	gets(s);
	k=(int)(s[0]-'0');
	for(i=1;i<strlen(s);i++)
	{
		k=k*10+(int)(s[i]-'0');
		if(i==1&&(k/13)!=0)
		{
		    printf("%d",k/13);
		}
		if(strlen(s)==2&&i==1&&(k/13)==0)
			printf("0");
		if(i!=1)
			printf("%d",k/13);
		k=k%13;
		if(i==strlen(s)-1)
		{
			printf("\n%d",k);
		}
	}
	if(strlen(s)==1)
		printf("0\n%d",k);
	return 0;
}
