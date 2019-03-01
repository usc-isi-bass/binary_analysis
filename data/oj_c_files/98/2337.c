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

int main ()
{
	int n,s;
	cin>>n;
	char a[9999][41];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s=0;
	cout<<a[0];
	for(int i=0;a[0][i]!='\0';i++)  s++;  
	for(int i=1;i<n;i++)
	{
		for(int j=0;a[i][j]!='\0';j++)  s++;
		s++;
		if(s<=80)   cout<<" "<<a[i];
		else 
		{
			cout<<endl;
			s=0;
			cout<<a[i];
			for(int j=0;a[i][j]!='\0';j++) s++;
		}
	}
	cout<<endl;
	return 0;
}