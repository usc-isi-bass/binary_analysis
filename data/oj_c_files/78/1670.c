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

/************************************************************
 * 03.cpp													*
 *															*
 *  Created on: 2010-11-20									*
 *      Author: ??										*
 ************************************************************/
int main()
{
	int z,q,s,l;									//????????
	char m[6];										//??????
	int j;
	for(j=0;j<6;j++)
	{
		m[j]='a';                                   //??????????????????
	}
	for(z=10;z<=50;z=z+10)							//?????????????????
	{
		for(q=10;q<=50;q=q+10)
		{
			if(z==q)
			{
				continue;
			}
			for(s=10;s<=50;s=s+10)
			{
				if(z==s||q==s)
				{
					continue;
				}
				for(l=10;l<=50;l=l+10)
				{
					if(z==l||q==l||s==l)
					{
						continue;
					}
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						m[z/10]='z';				//??????10??????????10?????????????????????
						m[q/10]='q';
						m[s/10]='s';
						m[l/10]='l';
					}
					int i;
					for(i=5;i>0;i--)
					{
						if(m[i]=='a')
						{
							continue;
						}
						else
						{
							cout<<m[i]<<" "<<i*10<<endl;				//?????????????????
							m[i]='a';
						}
					}
				}
			}
		}
	}
	return 0;
}
