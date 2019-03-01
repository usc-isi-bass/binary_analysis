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
	int t, i;
	int mark[26];
	char ch;
	cin >> t;
	cin.get();
	while(t)
	{
		memset(mark, 0, sizeof(mark));
		char c[100000];
		cin.getline(c, 100000);
		int len=strlen(c);
		for(i=0 ; i<len ; i++)
			mark[c[i]-'a']++;
		for(i=0 ; i<len ; i++)
			if(mark[c[i]-'a'] == 1)
			{
				cout << c[i] << endl;
				break;
			}
		if(i == len)
			cout << "no" << endl;
		t--;
	}
}