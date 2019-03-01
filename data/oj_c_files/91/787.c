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
	int i,k,t;
	char*p1,*p2;
	p2=p1=(char*)malloc(100*sizeof(char));
	gets(p1);
	k=strlen(p1);
	t=*(p1+0);
	for(i=0;i<k-1;i++)
      *(p2+i)=*(p1+i)+*(p1+i+1);
	if(i=k-1)
		*(p2+i)=*(p1+i)+t;
	printf("%s",p2);
}
