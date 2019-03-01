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
   char s[100];
   char *p,c;
   int len;
   gets(s);
   len=strlen(s);
   c=*s;
   for (p=s;p<s+len-1;p++)
	   *p=*p+*(p+1);
       *p=*p+c;
     for (p=s;p<s+len;p++)
    	 cout<<*p;
     return 0;
}