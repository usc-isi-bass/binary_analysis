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
	int i,now;
	char c,x;
	c=' ';now=1;
	scanf("%c",&c);
	if (c>=97) c=c-32;
	do{
		scanf("%c",&x);
		if (x==c||x-c==32) {
			now++;
		}
		else {
			printf("(%c,%d)",c,now);
			now=1;
			c=x;
			if (c>=97) c=c-32;
		}
	}
	while (c!='\n');
return 0;
}

