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


int main ()
{
	int t,i;
	cin >> t;//???????
	cin.get();
	while(t --)
	{
		int count[26]={0};//????count
		char str[100000]={0};
	
		cin.getline(str,10000);//????????
		for(i = 0; str[i] != '\0'; i ++)//???????????count????
		{
			count[str[i]-'a'] ++;
		}
		for(i=0; str[i] !='\0';i ++)//???????????????????????????no?
		{
			if(count[str[i]-'a'] == 1)
			{
				cout << str[i]<<endl;
				break;
			}
		}
		if(i == strlen(str))
		{	cout<<"no"<<endl;}
		
	}
	
	return 0;
}