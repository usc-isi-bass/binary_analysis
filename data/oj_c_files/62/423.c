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
	char str[100],p=1,i;
	cin.get(str,100);
		for(i=0;str[i]!='\0';i++)//??????
		{
			if(str[i]!=' ')
			{
				if(p==0)//?????????????
				{
					cout<<" "<<str[i];//??????????
					p=1;
				}
				else
					cout<<str[i];
			}
			else
			{
				p=0;
			}
		}
		return 0;
}