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
	char str[101];
	int i,j,k=0;
	cin.getline(str,101);
	char *p=NULL;
	p=str;
	for(i=0;i<strlen(str);i++)
	{
		if(*(p+i)==' '&&*(p+i+1)==' ')
		{
			for(j=i+1;j<strlen(str)-1;j++)
				*(p+j)=*(p+j+1);
			i--;
			k++;
		}
	}
	for(i=0;i<strlen(str)-k;i++)
	    cout<<str[i];
	return 0;
}

			
