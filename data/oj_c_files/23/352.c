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
	char a[9999][20]={'0'},x,b[9999]={'0'};
	int i=0,j=0,k=0,temp=0;
	cin.getline(b,9999);
	b[strlen(b)+1]='\0';
	//	cout <<b;
	for (; ;i++)
	{
		if (b[i]=='\0')
		{
			j=temp;
			break;
		}
		else if (b[i]!=' ')
		{
			a[k][j]=b[i];
			j++;
		}
		else 
		{
			k++;
			temp=j;
			j=0;
		}
		
	}
	
	for (j=k;j>0;j--) cout <<a[j]<<' ';
	cout <<a[0];
	
	return 0;
	
}