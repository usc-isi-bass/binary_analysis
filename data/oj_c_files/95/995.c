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
	char a[80],b[80];
	cin.getline(a,80);
	cin.getline(b,80);
	int i;
	for(i=0;i<80;i++)
		a[i]=(a[i]>='A'&&a[i]<='Z')? (a[i]+32):a[i];
	for(i=0;i<80;i++)
		b[i]=(b[i]>='A'&&b[i]<='Z')? (b[i]+32):b[i];
    if(strcmp(a,b)==0)cout<<"="<<endl;
	else if(strcmp(a,b)==1)cout<<">"<<endl;
	else cout<<"<"<<endl;
	return 0;
}