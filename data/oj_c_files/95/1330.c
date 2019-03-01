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

//******************************************
//???????????????           *
//???? ?                              *
//???2013/11/10                         *
//????????????????         *
//******************************************
int main()
{
	char a[80],b[80],c[80];
	gets(a);
	
	gets(b);
	for(int i=0;i<80;i++)
	{
		if(a[i]>('a'-1))
			a[i]=a[i]+('A'-'a');
		if(b[i]>('a'-1))
			b[i]=b[i]+('A'-'a');
	}
	if(strcmp(a,b)<0)
		cout<<"<";
	if(strcmp(a,b)==0)
		cout<<"=";
	if(strcmp(a,b)>0)
		cout<<">";
	return 0;
}

