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
	int max=-1,min=9999999;
	char a[1000],b[1000],c[1000];
	while(cin>>a)
	{
		int l=strlen(a);
		if(max<l){
			max=l;
			strcpy(b,a);
		}
		if(min>l){
			min=l;
			strcpy(c,a);
		}
	}
	cout<<b<<endl<<c<<endl;
	return 0;
}
