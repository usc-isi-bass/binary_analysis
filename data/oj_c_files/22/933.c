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
	int a,A=0,B=0;
	char c;
	
	
    for(;;)
    {
       scanf("%d",&a);
       if(A<a)
	   {  B=A;
		   A=a;
	   }
	   if(a<A&&a>B)
		   B=a;
	   scanf("%c",&c);
	   if(c!=',')
		   break;  
	}

	if(B<A&&B!=0)
	printf("%d\n",B);
	else if(B==A||B==0)
		printf("No\n");
	return 0;
}