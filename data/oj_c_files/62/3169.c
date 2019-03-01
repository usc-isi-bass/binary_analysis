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

int main(){
    int i,j;
char zf[110],sz[110];
gets (zf);
int l=strlen(zf);
zf[l]=' ';
zf[l+1]='\0';
for(i=0,j=0;i<l;i++){
	if((zf[i]==' ')&&(zf[i+1]==' '))
		continue;
sz[j]=zf[i];
j++;
}
sz[j]='\0';
 puts(sz);
return 0;
}

