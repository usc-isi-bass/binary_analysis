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
	int A,B,C;
	for(A=0;A<3;A++)
	  for(B=0;B<3;B++)
	    for(C=0;C<3;C++)
	    {
	     int a=(A<B)+(A==C);
	     int b=(A>B)+(A>C);
	     int c=(C>B)+(B>A);
	     if(a>b&&b>c    &&    A<B&&B<C)
	        cout<<"ABC"<<endl;
	     if(a>c&&c>b    &&    A<C&&C<B)
	        cout<<"ACB"<<endl;
	     if(b>a&&a>c    &&    B<A&&A<C)
	        cout<<"BAC"<<endl;
	     if(b>c&&c>a    &&    B<C&&C<A)
	        cout<<"BCA"<<endl;
	     if(c>a&&a>b    &&    C<A&&A<B)
	        cout<<"CAB"<<endl;
	     if(c>b&&b>a    &&    C<B&&B<A)
	        cout<<"CBA"<<endl;      
	    }
	return 0;
}
                   