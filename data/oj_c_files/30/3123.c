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
	int n,s;
	scanf("%d",&n);
	for(;n>=0;n--){
		switch(n){
		case 7:
		case 17:
		case 27:
		case 37:
		case 47:
		case 57:
		case 67:
		case 77:
		case 87:
		case 97: s=s;continue;}
		if(n%7==0||n>=70&&n<=79)
			continue;
		else
			s=s+n*n;}


	printf("%d\n",s);
	return 0;
}

