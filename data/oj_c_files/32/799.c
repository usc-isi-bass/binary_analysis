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

/********************************
 *?????						*
 *								*
 *  Created on: 2010-12-24		*
 *      Author: ??				*
 ********************************/
int main()
{
	char a[101],b[101];							//????????????????
	int n;
	cin>>n;										//?????????
	while(n>0)
	{
		cin.getline(a,101);
		cin.getline(a,101);						//???????
		cin.getline(b,101);
		int k=strlen(a)-1;
		for(int i=strlen(b)-1;i>=0;i--)			//????????????
		{

			if(a[k]>=b[i])
			{
				a[k]=a[k]-b[i]+48;				//?????????????????
			}
			else
			{
				a[k]=a[k]+10-b[i]+48;			//?????????
				int j=1;
				while(true)
				{
					if(a[k-j]!='0')
					{
						a[k-j]=a[k-j]-1;
						break;
					}
					else
					{
						a[k-j]='9';
						j++;
					}
				}
			}
			k--;
		}
		cout<<a<<endl;							//????????
		n--;
	}
	return 0;
}