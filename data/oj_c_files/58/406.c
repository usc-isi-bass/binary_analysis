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
    int n,i,j;
	cin>>n;
	char str[100][81];
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(str[i],81);
		if(str[i][0]!='_'&&((str[i][0]-'a'<0)||(str[i][0]-'z'>0))&&((str[i][0]-'Z'>0)||(str[i][0]-'A'<0)))
		{
			cout<<0<<endl;
			continue;
		}
		for(j=1;str[i][j]!='\0';j++)
		{
			if((str[i][j]!='_')&&((str[i][j]-'z'>0)||(str[i][j]-'a'<0))&&((str[i][j]-'Z'>0)||(str[i][j]-'A'<0))&&(str[i][j]!='0'&&str[i][j]!='1'&&str[i][j]!='2'&&str[i][j]!='3'&&str[i][j]!='4'&&str[i][j]!='5'&&str[i][j]!='6'&&str[i][j]!='7'&&str[i][j]!='8'&&str[i][j]!='9'))
			{
				cout<<0<<endl;
				break;
			}
		}
		if(str[i][j]=='\0')
           cout<<1<<endl;
	}
			   

    return 0;
}