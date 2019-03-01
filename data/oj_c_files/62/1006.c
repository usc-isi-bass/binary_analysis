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
{	char a[200];
    cin.getline(a,200);
    int t=strlen(a);
    for(int i=0;i<t;i++)
    	{if(*(a+i)!=' ')
    	cout<<*(a+i);
    	if(*(a+i)==' '&&*(a+i+1)!=' ')
    	    	{cout<<' ';}
    	if(*(a+i)==' ')
    	{continue;}

    	}
	return 0;
}
