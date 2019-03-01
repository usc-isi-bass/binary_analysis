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

//********************************
//*?????????   **
//*????? 1300012845 **
//*???2013.10.23  **
//********************************
int main ()//???
{
	int i,j,k,m,s;//??????i?k
	cin >> m;
	for (i=3; i<=m/2; i+=2)//?i?????m/2???
	{
		s=sqrt(i);
		for (j=2; j<=s;j++)
		{
			if (i%j==0)
				break;
		}
		if (j==s+1)//??????????i?????
		{
			k=m-i;
			s=sqrt(k);
			for (j=2; j<=s;j++)//??k?????
			{
				if (k%j==0)
					break;
			}
			if (j==s+1)
				cout << i << " "<< k<< endl;
		}
	}
	return 0;
}