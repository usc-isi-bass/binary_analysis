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
	char num[100],c;                         //??????num?????,????c
	int s=0,a,i,b=0;                         //???????s,
	cin.get(c);
	while (c!='\n')
	{
		num[s]=c;
		s++;
		cin.get(c);
	}
	if (s<4)                                 //???????????3
	{
		if (s==3)
			cout<<(num[0]*100+(num[1]-'0')*10+num[2]-'0')/13<<'\n'<<(num[0]*100+(num[1]-'0')*10+num[2]-'0')%13;
		else
		{
		    if (s==2)
			    cout<<((num[0]-'0')*10+num[1]-'0')/13<<'\n'<<((num[0]-'0')*10+num[1]-'0')%13;
		    else
			    cout<<(num[0]-'0')/13<<'\n'<<(num[0]-'0')%13;
		}
	}
	else
	{
		a=num[0]-'0';
		for (i=1;i<s-2;i++)              //???
		{
                        if (b!=0||(a*10+num[i]-'0')/13!=0)    //??????0,???
			{
                            b++;
                            cout<<(a*10+num[i]-'0')/13;
                        }
			a=(a*10+num[i]-'0')%13;
		    
		}
		if ((a*100+(num[s-2]-'0')*10+num[s-1]-'0')/13<10)
			cout<<0;
		cout<<(a*100+(num[s-2]-'0')*10+num[s-1]-'0')/13<<endl;
		cout<<(a*100+(num[s-2]-'0')*10+num[s-1]-'0')%13;
	}
	return 0;
}