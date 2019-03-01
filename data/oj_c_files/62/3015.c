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
char s[1000];
int i,l,k,m;
gets(s);
l=strlen(s);
m=l;
for(i=0;i<l-1;i++){
	if(s[i]==' '&&s[i+1]==' '){
		for(k=i;k<m-1;k++){s[k]=s[k+1];}
		i--;
	    m--;
	}
}
for(i=0;i<m;i++){printf("%c",s[i]);}
return 0;
}
