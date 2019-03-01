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
	char str[30],str2[30];
	cin>>str>>str2;
	int L=strlen(str),len=strlen(str2),k=0,i;
	for (i=0;i<len;i++)
	{
		k=0;
		while(str[k]==str2[i+k]&&k<L)
		{
			k++;
		}
		if(k==L)
		{
			break;
		}
	}
	cout<<i;
	return 0;
}