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
	char str1[100],str2[100];
	int i=0,k=0;
	for(i=0;i<100;i++)
	{
		str2[i]='\0';
	}
	cin.getline(str1,100);
	k=strlen(str1);
	cout<<str1[0];
	for(i=1;i<k;i++)
	{
		if((str1[i-1]!=' ')||(str1[i]!=' '))
			cout<<str1[i];
	}
	return 0;
}
