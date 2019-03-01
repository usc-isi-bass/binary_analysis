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


int main ()
{
	int i;
	char s[101],s1[101];
	cin.getline (s,101);
	for (i=0;s[i]!='\0';i++)
	{
		s1[i]=(char)((int)s[i]+(int)s[i+1]);
	}
	s1[i-1]=(char)((int)s1[i-1]+(int)s[0]);
	s1[i]='\0';
	cout <<s1<<endl;

	return 0;
}