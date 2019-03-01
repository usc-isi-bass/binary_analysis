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

/*
 *????reversal.cpp
 *??:???
 *?????2012-11-10
 *???????
 */



int main()
{
	int i,j,n=-1;
	char temp[101],word[101][101]; // word????
	while (cin >> temp)
		strcpy(word[++n],temp); // ?????????
	for (i=0,j=n;i<j;i++,j--) // ?????
	{
		strcpy(temp,word[i]); // ??
		strcpy(word[i],word[j]);
		strcpy(word[j],temp);
	}
	for (i=0;i<n;i++) // ??
		cout << word[i] << ' ';
	cout << word[n] << endl;
    return 0;
}