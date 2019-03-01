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
	int i,a=0,sum=0;     //a???????????????????????
	char zf[30];
	gets(zf);
	for(i=0;i<30;i++){                     //???????
		if('0'<=zf[i]&&zf[i]<='9'){      //????
			sum++;                  //????????
                            a=0;
			printf("%c",zf[i]);     //??????
		}  
		else if(a==0){                   //?????????????
			printf("\n");
			a=1;
		}
	}
	return 0;
}
