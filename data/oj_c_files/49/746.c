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
	char str[501]={'\0'};
	cin.getline(str,501);
	int i,j,k,n=0;
	for(n=0;str[n]!='\0';n++);
	
	for(i=1;i<n;i++)
	for(j=0;j<n-i;j++)
	{
		for(k=i;k>0;k--)
			if(str[j+i-k]!=str[j+k])
		    break;
		if(k==0)
		{
			for(k=j;k<=j+i;k++)
				cout<<str[k];
			cout<<endl;
		}
	}
	return 0;
}
