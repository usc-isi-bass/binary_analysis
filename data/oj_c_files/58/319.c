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
	char s[81];//???????
	int n;//????n
	cin>>n;//??n
	cin.get();//?????
	for(int i=0;i<n;i++)//????????
	{
		cin.getline(s,81);
		int ok=0;//??????
		if(s[0]=='_')  ok=1;
		if((s[0]<='z')&&(s[0]>='a'))  ok=1;
		if((s[0]<='Z')&&(s[0]>='A'))   ok=1;
		if(ok)//???????????
		{
			for(int j=1;s[j];j++)
				if((s[j]>='0')&&(s[j]<='9'))   ok=1;
				else if((s[j]<='z')&&(s[j]>='a'))  ok=1;
				else if((s[j]<='Z')&&(s[j]>='A'))   ok=1;
				else if(s[j]=='_')   ok=1;
				else {ok=0;break;}





		}

		cout<<ok<<endl;//??????


	}

    return 0;


}
