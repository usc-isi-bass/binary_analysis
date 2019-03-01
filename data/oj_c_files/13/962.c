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
	int n,a,i,j;
	while(cin>>n)
	{
		char b[20000];
		int a[20000];//????
		for(i=0;i<n;i++)
			cin>>a[i];
		cin.getline(b,20000);//?????????????????……?????????????????……//
		cout<<a[0];
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)//????????????
				if(a[i]==a[j])break;//????????????
			if(j==i)
				cout<<" "<<a[i];
		}
		cout<<endl;

	}
	return 0;}