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
	int i,m;
	char str[101];
	cin.getline(str,101,'\n');
	m=strlen(str);
	for(i=0;i<m;i++)
		if(str[i]!=32||(str[i]==32&&str[i+1]!=32))
			cout<<str[i];
	return 0;
}
