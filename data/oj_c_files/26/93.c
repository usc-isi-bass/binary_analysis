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
	char str[100][100];
	int i,j;
	for(i=0; ;i++)
	{
		cin>>str[i];
		if(cin.get()=='\n')
			break;
	}
	for(j=0;j<i;j++)
		cout<<str[j]<<" ";
	cout<<str[i];
	cout<<endl;
	return 0;
}