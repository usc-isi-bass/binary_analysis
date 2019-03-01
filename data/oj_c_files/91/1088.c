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
	char zfc1[101],zfc2[101];
	char *p1,*p2;
	p2=zfc2;
	gets(zfc1);
	for(p1=zfc1;*p1!='\0';p1++,p2++){
		if(*(p1+1)!='\0'){
			*p2=*p1+*(p1+1);
		}
		else{
			*p2=*p1+*zfc1;
		}
	}
	*p2='\0';


	printf("%s",zfc2);
	return 0;
}


