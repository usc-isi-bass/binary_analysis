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
	char x[101],*p;
	int i;
	gets( x );
	p=x;
	for ( i=0 ; *(p+i+1)!='\0' ; i++ )
		cout<<(char)(*(p+i)+*(p+i+1));
	cout<<(char)(*(p+i)+*p)<<endl;
    return 0;
}
