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
 char s[100],a;
	gets(s);
	int l=strlen(s),i;
 for(i=0;i<l;i++){
	 if(i!=l-1){
		 a=s[i]+s[i+1];
		 }
	 if(i==l-1){
		 a=s[0]+s[l-1];
	 }
	 printf("%c",a);
 }
return 0;
}
