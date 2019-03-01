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
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
			{if((B<=A)+(C!=A)==A-1&&(A<=B)+(A<=C)==B-1&&(C<=B)+(B<=A)==C-1)
			{  
				if(A>B&&B>C)
					cout<<"CBA"<<endl;
				if(A>C&&C>B)
					cout<<"BCA"<<endl;
				if(B>A&&A>C)
					cout<<"CAB"<<endl;
				if(B>C&&C>A)
					cout<<"ACB"<<endl;
				if(C>A&&A>B)
					cout<<"BAC"<<endl;
				if(C>B&&B>A)
					cout<<"ABC"<<endl;
			}
			}
	return 0;
}