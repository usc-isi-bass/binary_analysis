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
	char a[10000];
	int len;
	char *p;
	int i, n,j;
	int lenq=0, lenh=0;
	cin>>n;
	cin.get();
	cin.getline(a,10000);
	p=a;
	i=0;
	while(*(p+i)!=' ')
	{

		i++;
	}
	lenq=i;
	len=lenq;
	while(n--)
	{
		i=0;
		p+=lenq;
		p++;
		while(*(p+i)!=' '&&*(p+i)!='\0')
		{
			i++;
		}
		lenh=i;
		len+=lenh;
		len++;
		p-=lenq;
		p--;
		if(len<=80)
			{
				for(j=0;j<=lenq-1;j++)
					cout<<*(p+j);
				if(n)
					cout<<" ";
			}
		else
			{
				for(j=0;j<=lenq-1;j++)
					cout<<*(p+j);
				cout<<endl;
				len=lenh;
			}
		p+=lenq;
		p++;
		lenq=lenh;
					
	}



	return 0;
}