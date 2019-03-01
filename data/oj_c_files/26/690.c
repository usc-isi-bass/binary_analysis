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
{ char a[101];
gets(a);
int i,word=0;
for(i=0;i<strlen(a)-1;i++){
	if(a[i]==' ') word=0;
	else word=1;
	if(word==1&&a[i+1]!=' '){
		printf("%c",a[i]);}
	if(word==1&&a[i+1]==' '){
		printf("%c ",a[i]);}
}
printf("%c",a[strlen(a)-1]);

return 0;
}