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
	int c,i;
	char a[100],b[100];
	cin.getline(a,80);
	
	cin.getline(b,80);
    for(i=0;i<80;i++)
	{
		if(a[i]>96&&a[i]<123)a[i]=a[i]-32;
		if(b[i]>96&&b[i]<123)b[i]=b[i]-32;
	
	}
	c=strcmp(a,b);
		if(c>0)cout<<">";
		if(c<0)cout<<"<";
		if(c==0) cout<<"=";
	 return 0;
}
