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
	char a[120];
	
	char b[100][100];
	int i=0,sum=1,j=0,k=-1;
	cin.getline(a,120);
	for(i=0;i<120;i++)
		if(a[i]==' ')
			sum++;
	for(i=0;i<sum;i++)
		for(j=0;j<100;j++)
		{k++;
		if(a[k]!=' ')
			b[i][j]=a[k];
		else
		{
			b[i][j]='\0';
	         break;
		}
		}
		for(i=sum-1;i>=0;i--)
			if(i==0)
			cout<<b[i]<<endl;
			else
				cout<<b[i]<<" ";
		return 0;
}

