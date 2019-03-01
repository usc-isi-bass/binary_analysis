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
	char s[50],w[50];
	int i;
	scanf("%s %s",&s,&w);
	for(i=0;;i++){
		if(s[0]==w[i]){
			printf("%d",i);
			break;
		}
	}
	return 0;
}