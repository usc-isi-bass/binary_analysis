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
    char digit[100],result[100];
	gets(digit);
	int i,a,n,c,s;
	n=strlen(digit);
	for(i=0;i<n;i++)
	{
		if(i==0) a=digit[i]-'0';  
		else a=c*10+digit[i]-'0';
		result[i]=a/13+'0';
		c=a%13;
	}
	if((result[0]=='0' && n==1)||(result[1]=='0' && n==2))
		printf("0\n");
	else
	{for(i=0;i<3;i++)
	{
		if(result[i]!='0') {s=i;break;}
	}
	for(i=s;i<n;i++)
		printf("%c",result[i]);
	printf("\n");}
	printf("%d",c);
	return 0;
}