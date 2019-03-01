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
	int i,z,q,s,l,x=0,x1,x2,x3;                            //???????i?????z,q,s,l???????
	char a[6]={'\0'};
	for (z=1;z<=5;z++)
	{
		for (q=1;q<=5;q++)
		{
			if(z==q) continue;
			for (s=1;s<=5;s++)
			{
				if(z==s||q==s) continue;
				for (l=1;l<=5;l++)
				{
					if(z==l||q==l||s==l) continue;    //???
					x1=((z+q)==(s+l));   //??????3???
					x2=((z+l)>(s+q));
					x3=((z+s)<q);
					x=x1+x2+x3;
					if (x==3)
						a[2]='z';
						a[4]='q';
						a[1]='s';
						a[5]='l';                     //????
				}
			}
		}
	}
	for (i=5;i>=1;i--)
		if (i!=3)
			cout<<a[i]<<" "<<10*i<<endl;              //????
	return 0;
}