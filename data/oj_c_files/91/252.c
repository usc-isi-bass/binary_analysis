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


int main (){
	char s[101],s1[101];
	char *p=s,*p1=s1;
	cin.getline(s,101);
	for(;*(p+1)!=0;p++,p1++)
		*p1=*p+*(p+1);
	*p1++=*p+*s;
	*p1=0;
	cout<<s1;
}