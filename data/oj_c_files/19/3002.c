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
	char s[50][100]={'\0'};//????
	char a[100],b[100];
	int i,j;

	cin>>s[0];
	i=1;
	while(cin.peek()==' ')
	{
		cin>>s[i++];
	}
	cin>>a>>b;

	for(i=0;s[i][0]!='\0';i++)
	{
		if(strcmp(a,s[i])==0)
		{
			strcpy(s[i],b);
		}
	}

cout<<s[0];
	for(i=1;s[i][0]!='\0';i++)
	    cout<<" "<<s[i];

  
	return 0;
}
