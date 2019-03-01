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
	int a ;
	int newline=1;
	int sum = 0;
	char word[80]={0};
	cin >> a;
	memset(word,0,sizeof(word));
	scanf("%s",word);
	cout << word;	
	sum = strlen(word);
	while ( a > 1 )
	{
		memset(word,0,sizeof(word));
		scanf("%s",word);
		sum+=strlen(word)+1;
		if(sum <= 80)
		{
			cout <<' '<< word;//<<"sum="<<sum<<endl;

		}
		else
		{
			cout << endl << word;
			sum = strlen(word);
		}
		a--;
	}
		return 0;
}