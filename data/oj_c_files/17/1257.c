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

/*3704:??????*/ 



void del(char a[],int n)//????????????? 
{
	int i=0;
	while(a[i]!=')' && i<n) i++;
	int j;
	j=i-1;
	while(a[j]!='(' && j>=0) j--;
	if(i<n && j>=0)
	{
		a[i]=' ';a[j]=' ';
		del(a,n);
	}
	else
	{
		if(i>=n && j>=0) a[j]='$';
		if(j<0 && i<n) a[i]='?';
		if(!(i>=n && j<0)) del(a,n);
	}
	
}

int main()
{
	while(!cin.eof())
	{
		char a[101];
		cin.getline(a,101);
		cout<<a<<endl;
		int n,i;
		n=strlen(a);
		del(a,n);
		for(i=0;i<n;i++)
		    switch(a[i])
		    {
		    	case '$':
		    	case '?':cout<<a[i];break;
		    	default:cout<<' ';
		    }
		cout<<endl;
	}
	return 0;
}