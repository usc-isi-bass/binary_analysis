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
	int n;
	cin>>n;
	while(n--)
	{
		char s[105],a[105];
		int i,k=0,stack[105];
		memset(a,' ',sizeof(a));
		cin>>s;
		for(i=0;s[i]!='\0';i++)
			if(s[i]=='(')
				stack[k++]=-i-1;
			else if(s[i]==')')
				if(k==0 || stack[k-1]>0)
					stack[k++]=i+1;
				else
					k--;
		for(i=0;i<k;i++)
			if(stack[i]>0)
				a[stack[i]-1]='?';
			else
				a[-stack[i]-1]='$';
		a[strlen(s)]='\0';
		cout<<s<<endl
			<<a<<endl;
	}
	return 0;
}

