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

//??????????????????????....???strlen???????????????...???????????= =
int main()
{
	char a[45];
	int m,n;	//m?????n????
	int count=0;
	cin>>m;
	n=m+1;		//??n???
	for(int i=1;i<=m;i++)
	{
	cin>>a;
		if(count==0)
			{cout<<a;
			count=strlen(a);
			}
		else if(count+strlen(a)+1<80)
		{
		cout<<" "<<a;
		count=count+strlen(a)+1;
		}
		else if(count+strlen(a)+1==80)
		{
		cout<<" "<<a<<endl;
		count=0;
		}
		else
			{
			 cout<<endl;
			 cout<<a;
			 count=strlen(a);
			}
	}
	return 0;
}