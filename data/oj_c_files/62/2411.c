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
	char a[100]={0};//????
	int i=0,k=0;//????
	cin.getline(a,100);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			cout<<a[i];
			k=0;//?????????
		}
		else if(a[i]==' ')
		{
			k++;
			if(k==1)
			{	
				cout<<" ";//????????
			}
		}
	}
	return 0;
}
