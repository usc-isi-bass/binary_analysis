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
	int i=0;
	char a[80],b[80];
	cin.getline(a,80);
	cin.getline(b,80);
	for(;;i++)
	{
		if(a[i]>95) a[i]=a[i]-32;
		if(b[i]>95) b[i]=b[i]-32;
		if(a[i]=='\0'&& b[i]=='\0') break;
	}
	if(strcmp(a,b)==0) cout << "=";
	if(strcmp(a,b)>0) cout << ">";
	if(strcmp(a,b)<0) cout << "<";
	return 0;
}