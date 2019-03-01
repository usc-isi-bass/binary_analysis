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

//**********************************
//?????????ASCII?
//???2013.11.16
//**********************************
int main(void)
{ 
	int i=0,j=0;
	char a[81],b[81];
	cin.getline(a,80);
	cin.getline(b,80);
    for(i=0;i<strlen(a);i++)
	{
		if(65<=a[i]&&a[i]<=90)
			a[i]=a[i]+32;
	}
	for(i=0;i<strlen(b);i++)
	{
		if(65<=b[i]&&b[i]<=90)
			b[i]=b[i]+32;
	}
	if(strcmp(a,b)==0)
		cout<<"="<<endl;
	else if(strcmp(a,b)>0)
		cout<<">"<<endl;
	else
		cout<<"<"<<endl;

		  return 0;
}