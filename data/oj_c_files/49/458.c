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
//*???????.cpp                     **
//*??: ??     1100012808              **
//*???2011.11.13                       **
//******************************************
void zch(char a[])    //???????????
{
    int i = 0, j = 0, k = 0, flag = 0, l; 
    for (i = 2; i < strlen(a); i++) //i????????????
    {
	for (j = 0; j <= strlen(a) - i; j++) //j?????????
	{
            for (k = j; k < i / 2 + j; k++) //k????????????
	    {
		if (a[k] != a[i + j - 1 - (k - j)]) 
	            break;//???????????
	    }
	    if (k == i / 2 + j)//????????k??i/2+j
            {
		for (l = j; l < i + j; l++)//??????????
                    cout << a[l] ;
		cout << endl;
	     }
	}
    }
    return;
}
int main()  //???
{        //?????
    char ch[100000];
    cin.getline(ch, 100000);   //???????
    zch(ch);      //??zch??
    return 0;
} //?????

	

	