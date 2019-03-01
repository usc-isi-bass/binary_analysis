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
	char times[26];
	char flag[100000];
	char code[100000];
    int i, tell, n;
	cin >> n;
	for(; n > 0; n--)
	{
		tell = 1;
	    cin >> code;
	    for(i = 0; i < 26; i++)
		    times[i] = 0;
	    for(i = 0; code[i] != '\0'; i++)
		{
		    times[code[i] - 'a']++;
	        if(times[code[i] - 'a'] == 1)
			    flag[i] = 1;
		    else flag[i] = 0;
		}
	    for(i = 0; i < 100000; i++)
		    if(flag[i] == 1 && times[code[i] - 'a'] == 1)
			{
			    cout << (char) code[i] << endl;
			    tell = 0;
			    break;
			}
	    if(tell)
		    cout << "no" << endl;
	}
	return 0;
}