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
	char word[500][40];
	int n,i,l[500],length=80;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>word[i];
		l[i]=strlen(word[i]);
	}
	cout<<word[0];
	length=length-l[0];
	for(i=1;i<n;i++)
	{
		if(l[i]<length)
		{
			cout<<" "<<word[i];
			length=length-l[i]-1;
		}
		else
		{
			cout<<endl;
			length=80;
			cout<<word[i];
			length=length-l[i];
		}
	}
	return 0;
}
