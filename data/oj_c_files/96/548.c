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
	int i,len,temp;
	char str1[MAXLEN],str2[MAXLEN];
	
	cin >> str1;
	len=strlen(str1);

	temp=0;
	for (i=0;i<len;i++)
	{
		temp=(temp%13)*10+str1[i]-'0';
		str2[i]='0'+temp/13;
	}

	for (i=0;i<len;i++)
		if ( str2[i]!='0' )
			break;
	if (i==len)
		cout << "0" << endl;
	else
	{
		for (;i<len;i++)
			cout << str2[i];
		cout << endl;
	}
	cout << temp%13 << endl;
	return 0;
}