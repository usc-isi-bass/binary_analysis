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
	char letter[101];
	int i=0;
	while(true)
	{
		letter[i]=getchar();
		if(letter[i]=='\n')//??????
			break;
		i++;
	}
	int m,n,j,z;
	z=i-1;//?????
	for(j=z;j>=0;j--)
	{
		if(letter[j]==' ')//?????
		{
			for(m=j+1;m<=z;m++)
				cout<<letter[m];//??????????
			cout<<" ";
			z=j-1;
		}
	}
	for(n=0;n<=z;n++)//???????
		cout<<letter[n];
		return 0;
}
