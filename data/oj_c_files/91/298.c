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
    char a[202],*p=a;
    cin.getline(p,202);
    while(*(p+1)!='\0')
    {
    	cout<<(char)((int)*p+(int)*(p+1));
    	p++;
    }
    cout<<(char)((int)*p+(int)a[0]);
	return 0;
}









