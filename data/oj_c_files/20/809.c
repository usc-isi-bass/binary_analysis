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
{   int len;
char a[10]={0},b[3]={0},c[10]={0};
	while(cin>>a)
	{	int i,temp=0;
		for(i=0;i<10;i++)c[i]=a[i];
    	len=strlen(a);
    
    	for(i=0;i<len;i++)
		{if(a[temp]-a[i]<0)
		temp=i;}
	for(i=0;i<=temp;i++)
		cout<<c[i];
	getchar();gets(b);
	cout<<b[0]<<b[1]<<b[2];
	for(i=temp+1;i<len;i++)
		cout<<c[i];
	cout<<endl;	
	}
	return 0;
}