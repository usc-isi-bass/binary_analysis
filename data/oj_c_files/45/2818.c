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


int main(int argc, char* argv[])
{
	int n,i,p,j,l,k,l2;
	char a[60],b[60];

	
	scanf("%s %s",&a,&b);
	l=strlen(a);
	l2=strlen(b);
	i=0;
	j=0;
	k=0;
	while (i<l2)
	{
		if (a[0]==b[i])
		{
			k=i;
			p=i;
			
			while (a[j]==b[k])
				
			{
				j++;
				k++;
			}
			
		}
		if (j>=l-1)
		{
			printf("%d",p);
		break;
		}



		i++;
		
	}
	
	
	
	return 0;
}
