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
	char str[110];int num=0;int i,x;
	cin.getline(str,110);//?????
    for ( i=0;str[i]!='\0';i++)
	{
		if (str[i]==' ')
		{
			for ( x=i+1;;x++)
			{
				if (str[x]!=' ')//???????????????????????????
			     break;
			}cout<<' ';
			i=x;
		}
		
	
		if (str[i]!=' ') cout<<str[i];//???????????
	}
return 0;

}
