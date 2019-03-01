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
	int i=0;
	char c;
    while((c=getchar())!='\n')
	{
     if(c==' ')
	 {
		 if(i==0)
		 {
			 putchar(c);
		     i++;
		 }
	 }
	 else 
	 {
		 putchar(c);
	     i=0;
	 }
	}
	return 0;
}
