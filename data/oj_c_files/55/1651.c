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
	int a,b,num10=0;
	char pre[200];
	cin>>a;
	cin>>pre;
	
	cin>>b;
	
	for(int i=0;i<=strlen(pre);i++)
	{
		int temp=1;
		for(int j=1;j<strlen(pre)-i;j++)
		
			temp*=a;
		if(pre[i]>='0'&&pre[i]<='9')
			num10+=(int)(pre[i]-'0')*temp;
		if(pre[i]>='a'&&pre[i]<='z')
			num10+=(int)(pre[i]-'a'+10)*temp;
		if(pre[i]>='A'&&pre[i]<='Z')
			num10+=(int)(pre[i]-'A'+10)*temp;
		}
	
	char aft[120];
	int k=0;
	do
	{
		if(num10%b<=9)
		{
			aft[k]=num10%b+'0';
		}
		else aft[k]=num10%b+'A'-10;
		num10/=b;
		k++;
	}
	while(num10!=0);
	while(k>=1)
	{
		cout<<(char)aft[k-1];
		k--;
	}

	return 0;
}
		