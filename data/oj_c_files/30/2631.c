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
	int n,i,s=0,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
			continue;   //??????????????????
		k=i;
		while(k!=0)
		{
			if(k%10==7)
			{
				s-=i*i;       //????????????????????????
				break;
			}
			else k=k/10;
		}
		s+=i*i;  //????????????
	}
	cout<<s<<endl;
return 0;
}