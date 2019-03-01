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
	int t,i;							
	cin>>t;
	cin.get();							//?????
	for (i=0;i<t;i++)
	{
		int num[26]={0},j,k,length=0,x=0;				//num[]????26?????????????
		char ch[10000]={'\0'};
		cin.getline(ch,10000);
		length=strlen(ch);							//????????
		for (j=0;j<length;j++)
		{
			k=ch[j]-'a';
			num[k]++;						//?26???????????????
		}
		for (j=0;j<length;j++)
		{
			k=ch[j]-'a';
			if (num[k]==1)
			{
				cout<<ch[j]<<endl;
				x=1;
				break;
			}
		}
		if (x==0)
			cout<<"no"<<endl;
	}
	return 0;
}