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
	char str1[10000],str2[10000];
	int i=0,k=1;
	cin.getline(str1,10000);
	str2[0]=str1[0];
	for(i=1;i<10000;i++)
	{
		if((str1[i]!=' ')||((str1[i-1]!=' ')&&(str1[i+1]==' '))||((str1[i-1]!=' ')&&(str1[i+1]!=' ')))
		{
			str2[k]=str1[i];
			k=k+1;
		}
	}
	cout<<str2<<endl;
	return 0;
}