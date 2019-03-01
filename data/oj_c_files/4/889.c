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
	int row,col;
	int a[110][110];
	cin>>row>>col;
	for(int i=1;i<=row;i++)//????
		for(int j=1;j<=col;j++)
			cin>>*(*(a+i)+j);

	for(int k=2;k<=row+col;k++)//????????
		for(int i=1;i<=row;i++)
			for(int j=1;j<=col;j++)
				if(i+j==k)
					cout<<*(*(a+i)+j)<<endl;
	return 0;
}
