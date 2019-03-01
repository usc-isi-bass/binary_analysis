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
	char s[101];
	cin.getline(s,101);
	int length=strlen(s);
	char *p=s;
	for(int i=1;i<length;i++)
	{
		cout<<(char)(*p+*(p+1));
		p++;
	}
	cout<<(char)(*p+*(p-length+1))<<endl;
	return 0;
}
