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
	char b[101],a[101][101];
	cin.getline(b,101);
	a[0][0]=b[0];
	int k=1,i=0,j=1;
	while(b[k]!='\0')
	{
		if(b[k]!=' ')
			a[i][j++]=b[k];
		else
		{
			if(b[k]==' '&&b[k+1]!=' ')
				{
					a[i][j]='\0';
					i++;
					j=0;
				}
		}
		k++;
	}
	int t;
	for(t=0;t<i;t++)
		cout<<a[t]<<" ";
	cout<<a[i]<<endl;
	return 0;
}