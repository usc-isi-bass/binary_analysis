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

//============================================================================
// Name        : shj.cpp
// Author      : ???
// Time        : 2013.11.12
// Description : ????
//============================================================================
int main()
{
	char word[100][101];//???????
	int n=0;
	while(	cin.getline(word[n],101,' '))
		n++;
	word[n-1][strlen(word[n-1])-1]='\0';
	for(int i=n-1;i>=0;i--)//??????????????
	{
		cout << word[i];
		if(i!=0)
			cout <<' ';
	}
	cout << endl;
	return 0;
}