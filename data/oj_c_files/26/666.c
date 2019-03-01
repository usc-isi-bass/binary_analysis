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
	char tmp[102]={0},*p=tmp+1,prev;
	gets(tmp+1);
	prev=tmp[0];
	do{
		if(prev!=' '||prev!=*p)
			putchar(*p);
		prev=*p++;
	}while(*p);
	putchar('\n');
		
	
	return 0;
}