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
	char a;
	int flag=0,len=0;
	do{
		a=getchar();
		if((a==' '||a=='\n')&&len!=0)
		{
			if(flag++)
			{	printf(",%d",len);
			len=0;
			}
			else
			{	printf("%d",len);
			    len=0;
			}
		}
		else if(a!=' '&&a!='\n') len++;
	}while(a!='\n');
	return 0;
}