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
	char c[30];
	int i,x=0,y=0;
	gets(c);
	for(i=0;i<30;i++)
	{
	y=y+1;	
	if(c[i]=='\0')
			break;
	}
	for(i=0;i<y;i++)
	{
		if(c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9'||c[i]=='0')
		{
			printf("%c",c[i]);
		x=0;
		}
		else
		{
			if(x==0)
			printf("\n");	
			x=x+1;
		}
	}
	return 0;
}