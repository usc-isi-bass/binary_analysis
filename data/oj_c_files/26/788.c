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
	int i,num=0;
	char str[105];
	cin.getline(str,105);
	char *p=str;
	for(i=0;i<strlen(str);i++)
	{
		if(*(p+i)!=' ')
			{
				cout<<*(p+i);
				num=0;
		    }
		if(*(p+i)==' '&&num==0)
			{
				cout<<' ';
				num++;
		    }
		
	}
	return 0;
}


