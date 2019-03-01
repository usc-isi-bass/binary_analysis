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

char pos[100];
int po[100] = { 0 };
int len;
char a, b;
void ty(int );
int main()
{
	int i;
	cin.getline( pos, 100);
	a = pos[0];
	len = strlen (pos);
	b = pos[strlen(pos) - 1];
	for( i = 0; i < len; i ++)
	{
		if( pos[i] == a)
			po[i] = 1;
		else
			po[i] = 2;
	}
	ty( 0 );
	
	return 0;
}
void ty ( int i)
{
	int j = 0;
	if( i == len - 1)
	{
		cout << 0 << " " << i << endl;
		return ;
	}
	else
	{if( po[i] == 2)
		{
		for( j = i - 1; j > 0; j -- )
		{
			if( po[j] == 1)
				break;
		}
			
			cout << j << " " << i << endl;
			po[j] = 0;
			po[i] = 0;
		}
	
	ty( i + 1 );
	}
}
