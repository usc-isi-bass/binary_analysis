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
	char str[100010] = {'\0'};
	int t, i, j;
	cin >> t;
	cin.get();
	for(i = 1; i <= t; i++)
	{
		int k = 0,  len, flag = 0;
		cin.getline(str, 100010);
		len = strlen(str);
		for(j = 0; j < len; j ++)
		{
			flag = 1;	
			k = j + 1;
			while(k < len)
			{		
				if(str[k] == str[j])
				{
					flag = 0;
					str[k] = 0;
				}
				k++;
			}
			if(flag == 0)
				str[j] = 0;
				
		}
		for(k = 0; k < len; k++)
		{
			if(str[k] != 0)
			{
				cout << str[k] << endl;
				break;
			}
		}
		if(k == len)
			cout << "no" << endl;
		memset(str, 0, 100010);
	}
	return 0;
}




	


