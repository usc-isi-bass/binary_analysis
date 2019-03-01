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
	char m[102];
	cin.getline(m,102);
	int len=strlen(m);
	for(int i=0;i<len;i++)
	{
		if(m[i]==' ')
		{
			if(m[i-1]!=' ')
				cout<<m[i];
		}
		else
			cout<<m[i];
	}
	cout<<endl;
	return 0;
}