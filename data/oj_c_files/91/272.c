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
	char a[105],b[105];
	gets(a);
	int i,temp;
	for(i=0;i<strlen(a)-1;i++)
	{
		temp=a[i]+a[i+1];
		b[i]=temp;
	}
	temp=a[0]+a[strlen(a)-1];
	b[strlen(a)-1]=temp;
	for(i=0;i<strlen(a);i++)
	{
		cout<<b[i];
	}
	return 0;
}