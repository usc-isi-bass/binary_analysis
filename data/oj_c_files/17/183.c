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
	char ch1[101],ch2[101];
	int i=0,j=0,k=0,len=0;
	while(cin.getline(ch1,101))
	{
		len=strlen(ch1);
		int num=0;
		for(i=0;i<len;i++)
		{
			ch2[i]=' ';
			if(ch1[i]=='(')
			{
				ch2[i]='$';
				num++;
			}
			if(ch1[i]==')')
			{
				ch2[i]='?';
				num--;
				if(num==0)
				{
					ch2[i]=' ';
					for(j=0;j<i;j++)
					{
						if(ch1[j]=='(')
						{
							for(k=j;k<=i;k++)
							{
								ch2[k]=' ';
								break;break;
							}
						}
					}
				}
				if(num>0)
				{
					ch2[i]=' ';
					for(j=i;j>=0;j--)
					{
						if(ch2[j]=='$')
						{
							ch2[j]=' ';
							break;
						}
					}
				}
				if(num<0)
					num=0;
				
			}
		}
		ch2[len]='\0';
		cout<<ch1<<endl;
		cout<<ch2<<endl;
	}
	return 0;
}