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
	char ch[800][1000];
	int i,j,n,m=0;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin.getline(ch[i],100,'\n');
	}
	for(i=1;i<=n;i++)
	{
		if(ch[i][0]=='_'||(ch[i][0]<='z'&&ch[i][0]>='a')||(ch[i][0]<='Z'&&ch[i][0]>='A'))
		{
			    for(j=0;j<=(strlen(ch[i])-1);j++)
				{
					if(ch[i][j]!='_'&&(!(ch[i][j]<='z'&&ch[i][j]>='a'))&&(!(ch[i][j]<='Z'&&ch[i][j]>='A'))&&(!((ch[i][j]<='9'&&ch[i][j]>='0'))))
					{
						m++;
					}
				}	
			    if(m!=0)
				{
					cout<<"0"<<endl;
				}
                else
				{
					cout<<"1"<<endl;
				}
				m=0;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;

}