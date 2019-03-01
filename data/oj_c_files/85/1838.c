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
	char a[21];
	int n,i,j;
	cin>>n;
	cin.get();
	for(j=0;j<n;j++)
	{
		cin.getline(a,100);
		for(i=0;a[i]!='\0';i++)
		{
			if(i==0)
			{
				if(a[i]<65||(a[i]>90&&a[i]<95)||a[i]==96||a[i]>122)
				{
					cout<<"no"<<endl;
					break;
				}
			}
			else
			{
				if(a[i]<48||(a[i]>57&&a[i]<65)||(a[i]>90&&a[i]<95)||a[i]==96||a[i]>122)
				{
					cout<<"no"<<endl;
					break;
				}
			}
			if(i==strlen(a)-1)
				cout<<"yes"<<endl;
		}
	}
	return 0;
}