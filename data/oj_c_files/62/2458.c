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
	int i,j;
	char zfc[1000];
	gets(zfc);
	for(i=0;zfc[i]!='\0';i++){
		if(zfc[i]!=' '){
		    printf("%c",zfc[i]);
		}else if(zfc[i]==' '){
			if(zfc[i+1]!=' '){
				printf(" ");
			}else{
				continue;
			}
		}
	}
	return 0;
}