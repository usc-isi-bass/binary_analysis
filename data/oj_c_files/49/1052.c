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
	char m[500];
	cin.getline(m,500);
	int len,f;
	len=strlen(m);
	for(int i=2;i<=len;i++)//??
		for(int j=0;j<=len-i;j++)//?????
			for(int q=j;q<i+j;q++)//q??????
			{
				f=i+j*2;//???????? ?????????? ???????i j ???? 
				if(m[q]!=m[f-q-1])break;
				if((q+1)>=(f-q-2))
				{
					for(int k=j;k<i+j;k++)
					{
						if(k==i+j-1)
							cout<<m[k]<<endl;
						else
							cout<<m[k];
					}
					break;
				}
			}
			return 0;
}