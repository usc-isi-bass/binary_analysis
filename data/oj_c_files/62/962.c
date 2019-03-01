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
	int i,k,j;
	char a[1000];    //????
	cin.getline(a,1000);
	k=strlen(a);       //?i????
	for(i=0;i<k;i++)
		if(a[i]==' ')
		{
			if(a[i+1]==' ')
				{for(j=i+1;j<k-1;j++)            
				a[j]=a[j+1];a[j]=0;k--;i--;}            /*???????k??1?i?1????i*/
		}
	cout<<a;
    return 0;
}
