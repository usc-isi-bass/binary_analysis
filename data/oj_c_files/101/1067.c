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
	int a,b,c;
	for(a=1;a<=3;a++)
		{for(b=1;b<=3;b++)
			{for(c=1;c<=3;c++)
				{if(((b>a)+(c==a)+a==3)&&((a>b)+(a>c)+b==3)&&((c>b)+(b>a)+c==3))
					{if((a<b)&&(a<c))
						{cout<<'A';
						if(b<c)cout<<'B'<<'C';
						else cout<<'C'<<'B';
						}
					else if((b<c)&&(b<a))
						{cout<<'B';
						if(a<c)cout<<'A'<<'C';
						else cout<<'C'<<'A';
						}
					else {cout<<'C';
					     if(a<b)cout<<'A'<<'B';
					     else cout<<'B'<<'A';
					     }
					}
				}
			}
		}
}