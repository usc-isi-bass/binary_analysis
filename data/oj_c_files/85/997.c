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
	int i,n;
	char sen[21];
	cin>>n;
	while(n--)
	{
		cin>>sen;
		if((sen[0]>='a'&&sen[0]<='z')
			||(sen[0]>='A'&&sen[0]<='Z')
			||sen[0]=='_')
		{
			for(i=1;i<strlen(sen);i++)
			{
				if((sen[i]>='a'&&sen[i]<='z')||(sen[i]>='A'&&sen[i]<='Z')||(sen[i]>='0'&&sen[i]<='9')||sen[i]=='_')
					continue;
				else 
				{
					cout<<"no"<<endl;
					goto lable;
				}
			}
			cout<<"yes"<<endl;
		}
		else 
			cout<<"no"<<endl;
lable:continue;
	}
	return 0;
}