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
	char a[101],b[101];
	cin.getline(a,101);
	char *p=NULL,*q=NULL;
	for(p=a,q=b;*p!='\0';p++,q++){
		if(*(p+1)!='\0')
			*q=(char)(*p+*(p+1));
		else *q=(char)(*p+a[0]);
	}
	for(q=b,p=a;*p!='\0';p++,q++)
		cout<<*q;
	cout<<endl;
	return 0;
}
