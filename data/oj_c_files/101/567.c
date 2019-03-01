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
	int a,b,c,a1,b1,c1,k;
	char rank[3];
	for(a=0;a<3;a++)
	     for(b=0;b<3;b++)
		     for(c=0;c<3;c++)
		        {
				a1=(b>a)+(c==a);
                b1=(a>b)+(a>c);
				c1=(c>b)+(b>a);
                if((a+a1)==2&&(b+b1)==2&&(c+c1)==2)
				{rank[a]='A';
                rank[b]='B';
	            rank[c]='C';
	            for(k=0;k<3;k++)
                cout<<rank[k];}
				}
	cin.get();
	return 0;
}