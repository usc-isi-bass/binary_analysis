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
	int l;
	char str[20],sub[20],*max,*p,temp;
	while(cin>>str)
	{
		l=strlen(str);
		cin>>sub;
		max=str;
		for(p=str;p<=str+l;p++)                           //??????????
		{
			if(*max<*p)
			{
				max=p;                                    //????????
			}
		}
		temp=*max;*max=0;
		cout<<str<<temp<<sub<<max+1<<endl;                //???????????????????????
	}
	return 0;
}



