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

//????
int main()
{
	int a,s[26][1000],m,i,j,author,max=0;//a????
	char b[1000][28];//???
	for (i=0;i<26;i++)
		s[i][0]=0;
	cin>>m;
	for (i=0;i<m;i++)
	{
		cin>>a;
		cin>>b[a];
		for (j=0;b[a][j]!='\0';j++)
		{
			s[b[a][j]-'A'][0]++;//??????+1
			s[b[a][j]-'A'][s[b[a][j]-'A'][0]]=a;//??????
		}
	}
	for (i=0;i<26;i++)
	{
		if (s[i][0]>max)
		{
			max=s[i][0];
			author=i;
		}
	}			
	cout<<(char)(author+'A')<<endl<<max<<endl;
	for (j=1;j<=max;j++)
		cout<<s[author][j]<<endl;
	return 0;
}