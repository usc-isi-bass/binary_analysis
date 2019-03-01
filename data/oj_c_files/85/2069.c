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

//??????????C????
//???2013.12.21
//****************************

int main()
{
	int n=0,j=0,i=0,k=0;
	cin>>n;
	cin.get();
	while(n)
	{
		char a[100];
		j=0;
		gets(a);
		for(i=0;i<strlen(a);i++)
		{
			if(i==0)
			{
				if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
				    j++;
			    else
				   break;
			}
			else
			{
				if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='_'||(a[i]>='0'&&a[i]<='9'))
				    j++;
				else
					break;
			}
		}
		if(j==strlen(a))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	  n--;
	}
	return 0;
}