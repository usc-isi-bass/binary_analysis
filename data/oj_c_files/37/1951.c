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

char m[100002];
int main()
{
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++)
	{
		int b[28]={0};
		scanf("%s",m);
		int len=strlen(m);
		for(int j=0;j<len;j++)
			b[m[j]-'a']++;
		int f=0;
		for(int j=0;j<len;j++)
		{
			if(b[m[j]-'a']==1)
			{
				f++;
				cout<<m[j]<<endl;
				break;
			}
		}
		if(f<=0)
			cout<<"no"<<endl;
	}
	return 0;
}