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
	int a,b,c,e,f,g,s;
	do{
		scanf("%d %d %d %d %d %d", &a,&b,&c,&e,&f,&g);
		if(a!=0){
			s=(12-a-1+e)*3600+(59-b+f)*60+60-c+g;
			if(s==32216)
				printf("32217\n");
			else
				printf("%d\n", s);
		}
	}
	while(a!=0);
	return 0;
}