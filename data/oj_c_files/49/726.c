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
	char c[505]={0};
	cin.getline(c,505,'\n');
	int num,i,j,k,standard,sum=0,q;
	for(num=0;;num++)
	{
		if(c[num]=='\0')
			break;
	}



	for(i=2;i<=num;i++)              //??????
	{ 
		for(k=0;k<=num-i;k++)       //?a[0]???a[num-i]
		{  
			sum=0;
			for(j=k;j<=k+i-1;j++)
			{ 

				if(c[j]==c[2*k+i-1-j])
					standard=1;
				else
					standard=0;
				sum=sum+standard;

			}

			if(sum==i)
			{
				for(q=k;q<k+i-1;q++)
					cout<<c[q];

				cout<<c[k+i-1]<<endl;
			}




		}









	}









	return 0;











}