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
	int a,b,c,i1,i2,i3,i4,i5,i6,i7,i8,i9,i;
	char 	n[3];
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
			for(c=0;c<=2;c++)
			{
				i1=(b>a);
				i2=(a==c);
				i3=(a>b);
				i4=(a>c);
				i5=(c>b);
				i6=(b>a);
				i7=a+i1+i2;
				i8=b+i3+i4;
				i9=c+i5+i6;

     if (i7==2&&i8==2&&i9==2)
	 {
		 n[a]='A';
		 n[b]='B';
		 n[c]='C';
		 for(i=0;i<3;i++)
			 cout<<n[i];}



	 }
	 
		
			return 0;
}



		





