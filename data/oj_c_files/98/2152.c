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
	int n,i,m,j,length,sum=0;
	cin>>n;
	char str[41];
	cin.get();
	cin.getline(str,41,' ');
	sum=strlen(str)+1;
	cout<<str;
	for(i=1;i<n;i++)
	{
		cin.getline(str,41,' ');
		length=strlen(str);
		sum=sum+length+1;
		if(sum<=81)
		{cout<<' '<<str;
		continue;}
		else 
		{
			cout<<endl;
			cout<<str;
			sum=strlen(str)+1;
		}
	}
	return 0;
}