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
	char z[101]={'0'};
	char s[101]={'0'};
	char c;
	int   i,n;
gets(z);
n=strlen(z);
c=z[0]+z[n-1];
for(i=0;i<n;i++){
	s[i]=z[i]+z[i+1];
	
}
s[n-1]=c;	
printf("%s\n",s);
return 0;
}




