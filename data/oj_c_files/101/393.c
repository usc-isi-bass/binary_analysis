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

/*3?????????????? 
A??B??????C??????? 
B??A??????A??C??? 
C????B????B?A???? 
????????????????????? 
???????????3??????*/

int main()
{
	int a,b,c;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
		{
			if(b==a) continue;
			for(c=1;c<=3;c++)
			{
				if(c==a||c==b) continue;
				if((b>a)+(c==a)+a==3)
					if((a>b)+(a>c)+b==3)
						if((c>b)+(b>a)+c==3)
						{
							if(a==1) cout<<"A";
							if(b==1) cout<<"B";
							if(c==1) cout<<"C";
							if(a==2) cout<<"A";
							if(b==2) cout<<"B";
							if(c==2) cout<<"C";
							if(a==3) cout<<"A";
							if(b==3) cout<<"B";
							if(c==3) cout<<"C";
						}
			}
		}
	return 0;
}
							