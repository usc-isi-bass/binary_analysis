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

int max(int,int);
int main()
{
	int i,n,len1,len2;
	char str1[100],str2[100];
	cin.getline(str1,1000);
	cin.getline(str2,1000);
    len1 = strlen(str1);
	len2 = strlen(str2);
    n = max(len1,len2);
	for(i = 0; i < n; i++)
	{
		if(str1[i] >= 'a')
			str1[i] -= 32;
		if(str2[i] >= 'a')
			str2[i] -= 32;
		if((str1[i] != str2[i])&&(fabs(str1[i] - str2[i]) != 32))
		{
			if(str1[i] > str2[i])
			{
				cout << ">";
				break;
			}
			if(str1[i] < str2[i])
			{
				cout << "<" ;
				break;
			}
		}
	}
	if(i == n)
		cout << "=";
	return 0;
}
int max(int a,int b)
{
	if(a >= b)
		return a;
	if(a < b)
		return b;
}