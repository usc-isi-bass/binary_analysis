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
	char a[50],b[50],* aa,* bb;
	scanf("%s %s",a,b);
	char c[50][50],* cc;
	int len=strlen(a);
	int k=0,i,j=0;
	for(bb=b;*(bb+len-1)!='\0';bb++,k++)
	{
		i=0;
		for(cc=c[k];i<len;i++,cc++)
		{
			* cc=* (bb+i);
		}
		* cc='\0';
		j++;
	}
	for(i=0;i<j;i++)
	{
		if(strcmp(a,c[i])==0)
		{
			break;
		}
	}
	printf("%d",i);
	return 0;
}

