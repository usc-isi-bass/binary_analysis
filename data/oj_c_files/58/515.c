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
	int n,i;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
        int j, n1;
        char a[81];
		memset(a,0,81);
		cin.getline(a,81);
	    n1=strlen(a);
		if(n1==1)
		{
			if((a[0]>='A'&&a[0]<='z')||a[0]=='_')
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"0"<<endl;
			}
		}
		else
		{
			if((a[0]>='A'&&a[0]<='z')||a[0]=='_')
			{
			    for(j=1;a[j]!='\0';j++)
				{
				  if((a[j]>='0'&&a[j]<='9')||(a[j]>='A'&&a[j]<='z')||a[j]=='_')
				  {
				      continue;
				  }
				    break;
				}
			    if(j<n1)
				{
				  cout<<"0"<<endl;
				}
			    if(j==n1)
				{
				cout<<"1"<<endl;
				}
			}
		    else
			{
		       cout<<0<<endl;
			}
		}
		 

	    
	
	}
	return 0;
}