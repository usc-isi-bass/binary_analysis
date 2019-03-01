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
	char a[81],b[81];                           //???????
	int i,m;                                    //??i?m
	cin.getline(a,80);                          //?????
	cin.getline(b,80);
	i=0;
	while (a[i]!='\0')                          //????????????
	    {
	        if ('A'<=a[i]&&a[i]<='Z')
	        {
	    	    a[i]=a[i]+32;
	        }
	        i++;
	    }
	i=0;
	while (b[i]!='\0')
		{
		    if ('A'<=b[i]&&b[i]<='Z')
		    {
		    	b[i]=b[i]+32;
		    }
		    i++;
		}
	m=strcmp(a,b);                             //???
	switch(m)                                  //????
	{
	case 0: cout<<"="<<endl;break;
	case 1: cout<<">"<<endl;break;
	case -1: cout<<"<"<<endl;break;
	default: cout<<"error"<<endl;
	}
	return 0;
}