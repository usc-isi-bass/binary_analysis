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

/*
??:??13
??:??? 1200012921
??:2012.11.14
*/

int main()
{
	char a[101];             //????a????????
	int i, j, k;             //????
	int b[101], c[101];      //?????????????c?????
	int lenA, yushu, pro;    //lenA???????????yushu????????????pro??????????
	cin.getline(a, 101);     //?????
	lenA = strlen(a);        //???????
	for (i = 0, j = 1; i <= lenA - 1; i++)  //?????????????
	{
		b[j++] = a[j - 1] - '0';
	}
	if ((lenA == 2 && b[1] * 10 + b[2] <= 12) || lenA == 1) //???????1~12??
	{
		if (lenA == 1)                                      //??1~9????0??????
			cout << 0 << endl << b[1] << endl;
		else
			cout << 0 << endl << b[1] * 10 + b[2] << endl;  //??10~12????0??????
	}
	else                                                    //??(????????13)
	{
		if ( b[1] * 10 + b[2] >= 13)                        //?????????13?????????????1
		{
			yushu = (b[1] * 10 + b[2]) % 13;                //???????????
			c[2] = (b[1] * 10 + b[2] - yushu) / 13;         //?????
			for (i = 3; i <= lenA; i++)                     //??????????????,???????
			{
				pro = yushu * 10 +b[i];
				yushu = pro % 13;
				c[i] = (pro - yushu) / 13;
			}
			for (k = 2; k <= lenA; k++)                     //???
			{
				cout << c[k];
			}
			cout << endl;
		}	
		else                                               //??(???????13?????????????2)
		{
			yushu = (b[1] * 100 + b[2] * 10 + b[3]) % 13;  //???????????
			c[3] = (b[1] * 100 + b[2] * 10 + b[3] - yushu) / 13;   //?????
			for (i = 4; i <= lenA; i++)                    //??????????????,???????
			{
				pro = yushu * 10 +b[i];
				yushu = pro % 13;
				c[i] = (pro - yushu) / 13;
			}
			for (k = 3; k <= lenA; k++)                    //???
			{
				cout << c[k];
			}
			cout << endl;
		}
		cout << yushu << endl;                             //?????????????
	}
	return 0;
}