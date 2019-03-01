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

//******************************************
//*???????????????.cpp     **
//*??: ??     1100012808              **
//*???2011.11.08                       **
//******************************************
int main()  //???
{        //?????
    char str[100000];
    int t, flag[26] = {0}, i = 0, j = 0;
    cin >> t;
    for (i = 0; i < t; i++)  //?????????
    {
	cin >> str;
	memset (flag, 0, sizeof(flag));   //???flag????
	for (j = 0; j < strlen(str); j++)
            flag[str[j] - 'a']++;   //????????????
	for (j = 0; j < strlen(str); j++)
	{
            if (flag[str[j] - 'a'] == 1) //???????1
	    {
		cout <<  str[j]  << endl; 
		break;   //?????????
	     }
	     if (j == (strlen(str) - 1))  //?????????????
		cout << "no" << endl; //?????no
	}
    }
    return 0;
}  //?????

