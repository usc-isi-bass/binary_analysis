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
	int t,i,sum,k,l;
	char c;
	char alphabet[100000];
	cin >>t;  //????t
	cin.get();  //??????
	for (i=0;i<t;i++) //??t???
	{
		c=getchar();
		for (sum=0;c!='\n';sum++)
		{
			alphabet[sum]=c;
			c=getchar();
		}            //???????????????
		for (k=0;k<(sum-1);)    //???????
		{
			for (l=0;l<sum;)
			{
				if(k==l)
				{
					l=l+1;
				}
				if (alphabet[k]==alphabet[l])
				{
					l=sum+1;    //????????????
				}
				l+=1;
			}
			if (l==sum)
			{
				cout <<alphabet[k]<<endl;
				k=sum;
			}
			k=k+1;
		}
		if (k==(sum-1))
		{
			cout <<"no"<<endl;
		}
	}
	return 0;
}