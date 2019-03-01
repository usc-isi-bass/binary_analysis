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
	char c[100][100],v;
	int i;
	for(i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			v=getchar();
			if((v==' ')||(v=='\n'))
			break;
			else
			c[i][j]=v;
		}
		if(v=='\n')
		break;
	}
	for(int k=i;k>=0;k--)
	{
		if(k==i)
		cout<<c[k];
		else
		cout<<' '<<c[k];
	}
	return 0;
}
