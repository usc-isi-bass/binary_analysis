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
	char s[101],s1[101];
	char *p=NULL,*q=NULL;
	cin.getline(s,101);
	for(p=s,q=s1;p<s+strlen(s)-1;p++,q++)
		*q=*p+*(p+1);
	*q=*p+s[0];*(q+1)=0;
	for(q=s1;q<s1+strlen(s1);q++)
		cout<<*q;
	return 0;
}
