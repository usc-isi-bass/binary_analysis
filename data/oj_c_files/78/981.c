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

//???
int main()
{
	int wz=0,wq=0,ws=0,wl=0,a=0,i=0;
	char b[6]={'0'};
	for(wz=1;wz<=5;wz=wz+1)
	{
		for(wq=1;wq<=5;wq=wq+1)
		{
			if(wq==wz)
				continue;
			for(ws=1;ws<=5;ws=ws+1)
			{
				if(ws==wz || ws==wq)
					continue;
				for(wl=1;wl<=5;wl=wl+1)
				{
					if(wl==wz || wl==wq || wl==ws)
						continue;
					a=(wz+wq==ws+wl)+(wz+wl>ws+wq)+(wz+ws<wq);
					if(a==3)
					{
						b[wz]='z';
						b[wq]='q';
						b[ws]='s';
						b[wl]='l';
					}
					
				}
			}
		}
	}
	for(i=5;i>0;i--)
	{
		if(b[i]==0)
           continue;
		cout<<b[i]<<" "<<i*10<<endl;
	}
	return 0;
}		   


