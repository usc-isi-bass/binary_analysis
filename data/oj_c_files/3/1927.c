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
	int n,k,j;
	int s=0;
	cin>>n;
	cin>>k;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		}
		for(int z=0;z<n;z++)
		{
			for(j=z+1;j<n;j++)
			{
				if (a[z]+a[j]==k) 
				{	s=1;
					break;}
				}
					if(a[z]+a[j]==k) break;
					
			}
			 	if(s==1)	cout<<"yes";
				else if(s==0)
				cout<<"no";
				
				return 0;
	}
