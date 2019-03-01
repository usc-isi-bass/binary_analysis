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
	char a[200];
	cin.getline(a,199);
	int length=strlen(a),i=0;
	for(i=0;i<length;i++)
	{
		if(i>0)
		{
			if(a[i]==32&&a[i-1]==32)
				continue;
			else
				cout <<a[i];
		}
		else
			cout <<a[i];
	}
	cout <<endl;
	return 0;
}
