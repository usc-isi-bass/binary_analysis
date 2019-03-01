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
{
char string[101];
gets(string);
int i,word=1;
for(i=0;i<strlen(string);i++){
	if(string[i]!=' ') word=1;
if(word==1) printf("%c",string[i]);
if(string[i]==' ') 
	word=0;}

	return 0;
}
