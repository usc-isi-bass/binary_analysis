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

//**************************
//*?????              **
//*?????? 1300012863 **
//*???2013.11.1        **
//**************************
int main()  
{ 
	int a[20];
	int n,i,j,k;
	for(k=1; ;k++)
	{
     memset(a,0,sizeof(a));
	n = 0;
	i = 1;
	cin>>a[1];
    if(a[1]!=(-1))
	{
		if(a[1]!=0)
		{
		for(i=1; ; )
		{
		    i++;
			cin>>a[i];
		    if(a[i]!=0)
		    {
			for(j=1;j<=(i-1);j++)
			{
				if((a[i]==2*a[j])||(a[j]==2*a[i]))
			    {
					n = n + 1;
				}
		    }
			}
			else
		    {
			cout<<n<<endl;
			break;
		    }
		}
		}
	}
	else
	{
		break;
	}
	}
return 0;
}
