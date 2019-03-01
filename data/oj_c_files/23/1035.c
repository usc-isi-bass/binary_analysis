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
	char a[1000],b[100][100];
	int i=0,j=0,l=0;
	cin.getline(a,1000);
	int k=strlen(a);
    for(i=0;i<k;i++)
	{
		if(a[i]==' ')
		{
			j++;
			l=0;
		    i++;
		}
		b[j][l]=a[i];
		l++;

	}
    

    for(i=0;i<j;i++)
    	cout<<b[j-i]<<" ";
    cout<<b[0];

    return 0;
}