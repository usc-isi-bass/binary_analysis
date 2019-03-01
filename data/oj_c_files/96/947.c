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
	char dividend[102],p[100];
	cin>>dividend;
	int q=dividend[0]-'0';
	int i,len;                               
    len=strlen(dividend);//len?????????  
    for (int i=1;i<len;i++)
    {
       q=10*q+dividend[i]-'0';//????? 
       p[i-1]=q/13+'0';//??????? 
       q=q%13;//??
    }
    p[len-1]='\0';
    if(len==1) p[0]='0';
	if(p[0]=='0')
	{
        if(len==2||len==1) cout<<0;
        else
        for(int i=1;i<len-1;i++)
	     cout<<p[i];
        }
	else cout<<p;
	cout<<endl<<q<<endl;
	return 0;
}