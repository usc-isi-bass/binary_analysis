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

// lp.cpp : Defines the entry point for the console application.
//
// ??????.cpp : Defines the entry point for the console application.
//

int main()
{
	int n,i,j,len=0;
	char s[1000][100];
	char *p;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>s[i];
	cout<<s[0];
	len=strlen(s[0]);
    for(i=1;i<n;i++)
	{
		if(len+strlen(s[i])+1<=80)
		{
			p=s[i];
			cout<<' '<<p;
			len+=strlen(s[i])+1;
		}
		else
		{
			p=s[i];
			cout<<endl;
			cout<<p;
			len=strlen(s[i]);
		}
	}
	return 0;
}

