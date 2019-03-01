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
	char *a;
	int i,*symbol;
	a=(char*)malloc(30*sizeof(char));
	gets(a);
	symbol=(int*)malloc(strlen(a)*sizeof(int));
	for(i=0;a[i]!=0;i++)
	{
		if((*(a+i)=='1')||(*(a+i)=='2')||(*(a+i)=='3')||(*(a+i)=='4')||(*(a+i)=='5')||(*(a+i)=='6')||(*(a+i)=='7')||(*(a+i)=='8')||(*(a+i)=='9')||(*(a+i)=='0'))
		{
			*(symbol+i)=1;
			printf("%c",*(a+i));
		}
		else
		{
			*(symbol+i)=0;
			if(*(symbol+(i-1))==1)printf("\n");
		}
	}
	return 0;
}