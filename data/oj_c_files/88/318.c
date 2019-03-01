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
{	char n[31];
	int i,u;
	gets(n);
	for(i=0;i<strlen(n);i++){
		if(n[i]<='9'&&n[i]>='0'){
		printf("%c",n[i]);
		u=1;
		}
		else{
			if(u)
				printf("\n");
			u=0;
		}
	}
	return 0;
}
