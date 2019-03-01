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

/*????strstr*/


void main()
{
	char s[100]={'\0'},w[100]={'\0'};
	int k,t;
	char *p;



    scanf("%s",s);
    scanf("%s",w);

	k=strlen(w);
	t=strlen(s);


	p=strstr(w,s);

	printf("%d",p-w);


}