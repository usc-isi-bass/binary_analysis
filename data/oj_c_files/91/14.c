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
    char s[200],f[200],*ps=s,*pf=f;

    int len,i;

	gets(ps);

	len=strlen(s);

	for(i=0;i<len-1;i++){

		*(pf+i)=*(ps+i)+*(ps+i+1);
	}

	*(pf+len-1)=*(ps)+*(ps+len-1);

	*(pf+len)='\0';

	printf("%s",f);



	

	return 0;
}