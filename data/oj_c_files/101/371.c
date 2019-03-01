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

int main(){
	int a,b,c,As,Bs,Cs;//??abc?? ? ABC???
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			{if(a==b)continue;
			 for(c=1;c<=3;c++)
				 {if(c==a||c==b) continue;
				 As=(b>a)+(c==a);
				 Bs=(a>b)+(a>c);
				 Cs=(c>b)+(b>a);
				 if((a+As==3)&&(b+Bs==3)&&(c+Cs==3))
                 for(int i=1;i<=3;i++)//?????????i???????
                	 {
                	 if(a==i) cout<<'A';
                	 if(b==i) cout<<'B';
                	 if(c==i) cout<<'C';
                	 }
				 }


			}

}