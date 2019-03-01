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
	int i=0,j=0,k=0,l=0;
	char str[100];
	cin.getline(str,100);
	for(i=0;str[i]!='\0';i++)
		j=i;
	for(i=0;i<=j;i++)
	{
		if(str[i]==' ')
			l=l+1;
	}
	if(l!=0)
	{
    	for(i=j-1;i>=0;i--)
		{
	    	if(str[i]==' ')
			{
	    		for(k=i+1;k<=j;k++)
			    	cout<<str[k];
		    	j=i;
		    	break;
			}
		}
    	for(i=j-1;i>=0;i--)
		{
	    	if(str[i]==' ')
			{
		    	cout<<" ";
		    	for(k=i+1;k<j;k++)
			    	cout<<str[k];
		    	j=i;
			}
		}
		cout<<" ";
		for(i=0;str[i]!=' ';i++)
			cout<<str[i];
	}
  	if(l==0)
	{
		for(i=0;i<=j;i++)
			cout<<str[i];
	}

	return 0;
}
