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
	int i;
	char zfc[MAX];

	gets(zfc);

	for(i=0;zfc[i];i++){
		if(zfc[i]!=' '){
			printf("%c",zfc[i]);
		}
		
		if(zfc[i]==' '&&zfc[i+1]!=' '){
			printf("%c",zfc[i]);
		}
	}
   return 0;
}
	
				