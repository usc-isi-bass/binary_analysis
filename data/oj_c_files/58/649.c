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
	int n, i, j, len,count;
	char word[81];
	cin >> n;
	cin.get();
	for ( i = 0; i < n; i ++ )
	{
		cin.getline(word,81);
		len = strlen(word);	
		if ( word[0] == '_' || (word[0] >= 'A' && word[0] <= 'Z') || (word[0] >='a'&& word[0] <= 'z'))
		{
			count = 1;
			for ( j = 1; j < len; j ++ )
			{
			
				if ( word[j] == '_' || (word[j] >= 'A' && word[j] <= 'Z') || (word[j] >='a'&& word[j] <= 'z') || (word[j]<='9' && word[j] >='0') )
				count ++;
			}
			if ( count == len )
				cout << 1 << endl;	
			else
				cout << 0 << endl;
		}
		else 
			cout << 0 << endl;
		cin.clear();
	}
	return 0;
}

	



