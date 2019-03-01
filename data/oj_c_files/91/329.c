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


int main() {
	char s[102],s1[102];
	cin.getline(s,102);
	int i=0;
	char *p=s,*q=s1;
	for(i=0;i<strlen(s)-1;i++)
	{
		*(q+i)=*(p+i)+*(p+i+1);
		cout<<*(q+i);
	}
		*(q+i)=*(p+i)+*(p);
	    cout<<*(q+i);
	return 0;
}