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
	int n,i,j,len[100]={0},sum[100]={0};
	char str[100][81];
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
		cin.getline(str[i],81,'\n');
	for(i=0;i<n;i++)
	{
		if((str[i][0]=='_')||('A'<=str[i][0]&&str[i][0]<='Z')||('a'<=str[i][0]&&str[i][0]<='z'))
		{
			for(j=1;j<81;j++)
			{
				if(str[i][j]=='\0') break;
				len[i]++;
				if((str[i][j]=='_')||('a'<=str[i][j]&&str[i][j]<='z')||('A'<=str[i][j]&&str[i][j]<='Z')||('0'<=str[i][j]&&str[i][j]<='9'))
					sum[i]++;
			}
			if(len[i]==sum[i])
				cout<<1<<endl;
			else
				cout<<0<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}