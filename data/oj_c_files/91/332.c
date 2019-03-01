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


int main() {
	unsigned int i;
	char s[102],k;
	cin.getline(s,102);
	char *p=s;
	k=*p;			//????
	for(i=0;i<strlen(s)-1;i++)
	{
		*p+=*(p+1);
		p++;
	}				//???????
	*p=*p+k;			//??????
	cout<<s;
	return 0;
}
