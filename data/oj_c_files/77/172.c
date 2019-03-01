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

//**********************************************************
//*   ?  ?   ?: ????.cpp                            *
//*   ?       ?: ? ?                                   *
//*   ? ? ? ?: 2010?12?6?                           *
//**********************************************************
int main ()
{
	char a[101]={'\0'};                          //??????????
	int i=1,j=0;
	cin.getline( a, 101, '\n');
	while((i<101)&&(a[i]!='\0'))                 //?????
	{
		if(a[i]==a[0])                          //?????????????????????
		{
			i++;
			continue;
		}
		else if(a[i]!=a[0])                     //????????????
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]!=a[0])                  //?????????????
					continue;
				else if(a[j]==a[0])             //????????????????????
				{
					cout<<j<<" "<<i<<endl;
					a[i]='0';
					a[j]='0';
					break;
				}
			}
		}
		i++;
	}
	return 0;
}
