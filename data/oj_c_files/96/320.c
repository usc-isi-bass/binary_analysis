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

//****************************************
//*?????13                       
//*?????? 1100012789      
//*???2011.11.4                       
//****************************************

int main()
{
	char number[101], result[101]; // number????????result?????
	int i, remain = 0, digit; // i?????remain??????digit??????
	cin >> number;
	digit = strlen(number);
	for (i = 0; i < digit; i++)
	{
		result[i] = ((remain * 10 + (number[i] - '0')) / 13) + '0'; // ?????????
		remain = (remain * 10 + (number[i] - '0')) % 13; // ???????
	}
	result[i] = '\0'; // ??????
	for (i = 0; result[i] == '0' && i < strlen(result) - 1;) // ?????????????????
			i++;
	cout << result + i << endl;
	cout << remain << endl;
	return 0;
}
//??3?11?????????