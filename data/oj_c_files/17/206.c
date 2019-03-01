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
	char word[101]={"0"},temp[101]={"0"};
	int len=0,i=0,j=0,s=0;
	while(cin.getline(word,101))
	{
		cout<<word<<endl;
        len=strlen(word);
		for(i=0;i<len;i++)
			temp[i]=' ';
		temp[i]='\0';
		for(i=0;i<len;i++)              //???????????
		{
			if(word[i]=='(')temp[i]='$';
            if(word[i]==')')temp[i]='?';
		}
		for(i=0;i<len;i++)
		{
			s=1;
			if(word[i]=='(')          //?????????
			{
				
				for(j=i+1;j<len;j++)
				{
					if(word[j]=='(')
						s++;
					if(word[j]==')')
						s--;
					if(s==0)
					{
						temp[i]=' ';
						temp[j]=' ';
						break;
					}
				}
			}
		}
		cout<<temp<<endl;
		strcpy(temp,"0");
	}
	return 0;
}