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


int main(int argc, char* argv[])
{
	char s1[LEN],s2[LEN],*p1,*p2,*h;
	int i;
	gets(s1);
	h=p1=s1;
	p2=s2;
	while(*p1!=0){
		if(*(p1+1)==0)
			*p2=*h+*p1;
		else
			*p2=*p1+*(p1+1);
		p1++;
		p2++;
	}
	*p2=0;
	printf("%s",s2);
	return 0;
}