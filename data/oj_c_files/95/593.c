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
	int a,length1,length2,i;
          char c1[80],c2[80];
	gets(c1);
	gets(c2);
          length1=strlen(c1);
	length2=strlen(c2);
    for(i=0;i<=length1;i++)
		if(c1[i]<='z'&& c1[i]>='a') c1[i]-=32;
	for(i=0;i<=length2;i++)
		if(c2[i]<='z'&& c2[i]>='a') c2[i]-=32;
    a=(strcmp(c1,c2));
	if(a>0) printf(">");
	if(a<0) printf("<");
          if(a==0) printf("=");
	return 0;
}

