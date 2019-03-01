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
	int record[26][1000];
	memset(record,0,sizeof(record));
	char name[10];
	int m,temp;
	cin>>m;
	for (int i=0;i<m;i++)
	{
		cin>>temp;
		cin.get();
		cin.getline(name,10);
		for (int i=0;i<strlen(name);i++)
		{
			record[name[i]-65][record[name[i]-65][0]+1]=temp;
			record[name[i]-65][0]++;
		}
	}
	int flag=0;
	for (int i=0;i<25;i++)
	{
		if (record[i][0]>record[flag][0])
		{
			flag=i;
		}
	}
	cout<<(char)(flag+65)<<endl<<record[flag][0]<<endl;
	for (int i=1;i<=record[flag][0];i++)
	{
		cout<<record[flag][i]<<endl;
	}

	return 0;
}