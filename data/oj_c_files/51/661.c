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
	int n,j,len,cnt=0,max=0;
	cin>>n;
	char s[505];
	cin>>s;
	len=strlen(s);
	char *p,*q,*a;
	for(p=s;p<=s+len-n;p++)//??????????????
	{
		cnt=1;//???
		for(q=p+1;q<=s+len-n;q++)//?????????????
		{
			for(j=0;j<n;j++)
			{
				if(*(p+j)!=*(q+j))
					break;
			}
			if(j==n)
				cnt=cnt+1;
		}
		if(cnt>max)	
			max=cnt;					
	}
	if(max==1)
		cout<<"NO";
	else
	{
		cout<<max<<endl;
		for(p=s;p<=s+len-n;p++)//?????????????
		{
			cnt=1;
			for(q=p+1;q<=s+len-n;q++)//??????
			{
				for(j=0;j<n;j++)
			{
				if(*(p+j)!=*(q+j))
					break;
			}
			if(j==n)
				cnt=cnt+1;
			}			
			if(cnt==max)
			{
				a=p;
				for(j=0;j<n;j++)
					cout<<*(a+j);
				cout<<endl;
			}
		}
	}
		
		return 0;
}