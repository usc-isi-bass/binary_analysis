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
	int n,i,j,flag=0;
	int a[100]={0};
	char ch[100];//????????
	cin>>n;
	cin.get();//????
	for(i=0;i<n;i++)
	{
	    cin.getline(ch,100);
	    for(j=0;j<strlen(ch);j++)
		{	if(ch[j]<48||(ch[j]>57&&ch[j]<65)||(ch[j]>90&&ch[j]<95)||ch[j]==96||ch[j]>122) flag++;//??????????
		}
		if(flag==0)
		{if((ch[0]==95)||(ch[0]>64&&ch[0]<91)||(ch[0]>=97&&ch[0]<123))//????????65~90??97~122??95
		a[i]=1;  }
		flag=0;
		//????????a[i]??1
		
	}
	for(j=0;j<n;j++)
		cout<<a[j]<<endl;//????????????
	return 0;
}