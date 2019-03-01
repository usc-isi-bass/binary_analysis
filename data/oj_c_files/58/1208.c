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
	char string[81];
	int n,i,j,flag;
	cin>>n;
	cin.get();
	for (i=1;i<=n;i++)
	{
		flag=0;
		gets(string);
		char x=string[0];
		if ( (x<65) ||(x>90&&x<95) || (x==96) || (x>122) )
			{ flag=1;}
		for (j=1;string[j]!='\0';j++)
		{
			x=string[j];
			if ( (x<48) || (x>57&&x<65) ||(x>90&&x<95) || (x==96) || (x>122) )
				{ flag=1;break;}
		}
		if (i!=1) cout<<endl;
		if (flag==1) cout<<0;
		else cout<<1;
	}
	return 0;
}