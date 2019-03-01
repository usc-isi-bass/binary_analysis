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


void main()
{
	char zfc[101],newzfc[101]={0};
	char *p,*pn;
	int len;
	pn=newzfc;
	gets(zfc);
	len=strlen(zfc);
	for(p=zfc;p<zfc+len-1;p++){
		*pn=*p+*(p+1);
		pn++;
	}
	p=zfc;
	*pn=*p+*(p+len-1);
	puts(newzfc);
}
