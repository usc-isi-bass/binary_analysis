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
	char ch[100];
	int i,j=0,k=0;
	while(k<100)
	{
		ch[k]=getchar();
		if(ch[k]=='\n')
		break;
		k++;
	}
	for(i=0;i<k;i++)
	{
		if(ch[i]==32)
			j++;
		else
			j=0;

        if(j<2)
			printf("%c",ch[i]);
	}
	return 0;
}
