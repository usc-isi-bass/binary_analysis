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
	int l,i;
	char s[300];
gets(s);
l=strlen(s);
for(i=0;s[i]!='\0';i++){
if(s[i]!=32) printf("%c",s[i]);
if(s[i]==32&&s[i+1]!=32) printf("%c",s[i]);

}


	return 0;
}