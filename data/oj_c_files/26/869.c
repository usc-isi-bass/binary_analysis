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

//???????
int main()
{
	char str[110];int num=0;int i,x;char *p=str;//??????????
	cin.getline(str,110);//?????
    for ( i=0;*p!='\0';p++,i++)
	{
		if (*p==' ')
		{
			for ( x=i;;x++,p++)
			{
				if (str[x]!=' ')//???????????????????????????
			     break;
			}cout<<' ';
			i=x;
		}
		
	
		if (*p!=' ') cout<<*p;//???????????
	}
return 0;

}
