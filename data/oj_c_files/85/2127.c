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
	int n,i,j,length,flag;
	char str[21];
	cin>>n;
	cin.get();
	for(j=0;j<n;j++)
	{
		cin.getline(str,21);
		length=strlen(str);
	    flag=0;
		if((str[0]>='A'&&str[0]<='Z')||(str[0]>='a'&&str[0]<='z')||(str[0]=='_'))
		{
			flag=1;
			for(i=1;i<length;i++)
			{
				if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||(str[i]=='_')||(str[i]>='0'&&str[i]<='9')) flag++;
				else 
				{
					cout<<"no"<<endl;
					break;
				}
			}
			if(flag==length) cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
		
