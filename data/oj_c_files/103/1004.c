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
	char s[5000];
	int n=0;
	cin.getline(s,1500);
	for(int i=0;i<strlen(s);i++)
	{
		if(i==0)
		{
			cout<<"(";
			if(s[i]>='a')
				s[i]=s[i]-'a'+'A';
			cout<<s[i]<<",";
			n++;
		}
		else{
			if(s[i]>='a')
				s[i]=s[i]-'a'+'A';
			if(s[i]==s[i-1])
				n++;
			else
			{
				cout<<n<<")("<<s[i]<<",";
				n=1;
			}
		}
	}
	cout<<n<<")";
	return 0;
}