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
	int n,i,j,k,t;
	int flag;
	char a[502];
	char p;
	i=1;
	while(cin.get(p)&&p!='\n')
	{
	a[i]=p;
	n=i;
	i++;
	}		//????????
	for(i=2;i<=n;i++)	//????????????2?n
		for(j=1;j<=n+1-i;j++)	//????????????i???j???j+i-1??
		{	for(k=0;k<=i-1;k++)	
			{
			if(a[j+k]==a[j+i-1-k])	//?????i????????
				flag=1;
			else{flag=0;break;}
			}
		if(flag==1)		
		{for(t=j;t<=j+i-2;t++)
			cout<<a[t];		//???i-1??
		cout<<a[j+i-1]<<endl;} //???i?????
		}
	return 0;
}