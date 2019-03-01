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



int main(int argc, char *argv[])
{
    int n, i ,sum=0;
    cin>>n;
    for (i=1 ;i <= n;i ++)
    { 
    if ((i%7) == 0)
		;
    else
	{if ((i/10 ==7) || ((i %10) ==7))
	;
           else
           {sum= sum +i*i;}
           }
      }
cout<<sum<<endl;

    return EXIT_SUCCESS;
}
