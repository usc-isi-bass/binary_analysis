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

//****************************
//**Title:???3,5,7?????? **
//**Author:?????00017687 **
//**Date??13.10.3         **
//**File??cpp             **
//****************************
int main()
{
	int num;						//???num????????
	cin >> num;						//???num
	int t = 0;						//t??????????????5,7??????num???t??+1
	//??????????????5,7???????
	//i??????????????????+2????????7
	for ( int i = 3; i <= 8 ; i = i + 2 ) 
	{								//???????
		if (num % i == 0)			//???num???i???
		{							
			if (t == 0)				//???????????????????????????????um??
				cout << i;			//???i?????????
			else					//???
				cout <<" "<< i;		//???i????????
			t++;					//t??+1
		}							
	}								//??????
	if (t == 0)						//???????????????????????i??????num
		cout << "n";				//???"n"
	cin.get();						
	cin.get();
	return 0;
}