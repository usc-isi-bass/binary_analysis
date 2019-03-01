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
	int i=0,j=0,k=0;
	char c[101],str[20][20]={'\0'};
	cin.getline(c,101);
	while(c[i]!='\0')
	{
		if(c[i]!=' ')
		{
			str[j][k]=c[i];
			k++;
		}
		else
		{
			j++;k=0;
		}
		i++;
	}
	
	for(k=j;k>=1;k--)
		cout<<str[k]<<" ";
	cout<<str[0];
	return 0;
}
