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
	char a[100][21];
	int n,i,j;
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(!((a[i][0] >= 'a' && a[i][0] <= 'z') || 
			(a[i][0] >= 'A' && a[i][0] <= 'Z') ||
			(a[i][0] == '_')))
		{
			cout<<"no"<<endl;
			continue;
		}
		else
		{
			for(j = 1; a[i][j]!='\0'; j++)
			{
				if(!((a[i][j] >= 'a' && a[i][j] <= 'z') ||
					(a[i][j] >= 'A' && a[i][j] <= 'Z') ||
					(a[i][j] >= '0' && a[i][j] <= '9') ||
					(a[i][j] =='_')))
				{
					cout << "no" <<endl;
					break;
				}
				if(a[i][j+1]=='\0')
					cout<<"yes"<<endl;
			}
			
		}
	}
	return 0;
}