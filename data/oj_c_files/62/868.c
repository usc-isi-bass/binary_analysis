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
char zf[200];
gets(zf);
int i=0;
int k;
int s,b;
int len=strlen(zf);
while(zf[i]){
	if(zf[i]==' '&&zf[i+1]==' '){
     b=i;
	 k=i;
	while(zf[k]==' '){
     k=k+1;
	}
	s=k-i;
	while(b<=len-s){
		zf[b+1]=zf[b+s];
		b++;
		
	}
	len=len-s+1;
	}
	i=i+1;

}

printf("%s",zf);

return 0;
}
