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
	char str[100];                          //????????????????
	int i,j;                      //????i?j???????
	cin.get(str,100);
	for(i=0;i<100;i++)
	{
		if(str[i]==32&&str[i+1]==32)
		{
			for(j=i+1;j<100;j++)
			{
				str[j]=str[j+1];
			}                           //???????????????????2???????????????
			i=i-1;
		}
	}
	cout<<str;
	return 0;
}