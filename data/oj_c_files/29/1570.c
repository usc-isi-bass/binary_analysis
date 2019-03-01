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

//***************************************
//       ????????               *
//       ??????                   *
//       ?????2012.10              *
//       ????????               *
//***************************************
int main()                                       //?????
{
	int m,n,i=1,j=1;                             //?????????m?????n?????i,j
	double x,s,a=1,b=2;                          //?????????x,a,b?????s?
	cin>>m;       
	for(j=1;j<=m;j++)                            //????
	{
		cin>>n;                                  //??n
		for(a=1,b=2,i=1,s=0;i<=n;i++)            //???????
		{
			if(i%2==1)                        
			{
				x=b/a;
				s=s+x;
				a=a+b;
			}
			else
			{
				x=a/b;
				s=s+x;
				b=b+a;
			}
		}
		printf("%.3f\n",s);                       //????
	}

	return 0;
}