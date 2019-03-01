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


void main()
{
	char c;
	int num=0;

	c=getchar();

	while(c!='\n'){
		if(c>='0'&&c<='9'){
			num=1;
			printf("%c",c);
		}
		else{
			if(num==1){
				putchar('\n');
				num=0;
			}
		}
		c=getchar();
	}
}