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

/*************************
 ***??:??? 1200012776
 ***????:??13
 ***??:2012?11?4?
 *************************/
int main()
{
	int i, j, k, count_num;
	//count_num??????
	
	char num[101], shang[100];
	int mod = 0;
	cin >> num;
	count_num = strlen(num);
	mod = 0;
	for (j = 0; j < count_num; j++)
	//???????????,???????,?????13,?????10??????,????13,??????
		
	{
		mod = mod * 10 + num[j] - '0';	//?????????????10????????????
		shang[j] = mod / 13 + '0';	//?j???????
		mod = mod % 13;	//???????????????13???
	}
	shang[count_num] = '\0';	//????????,???????????0,??????,???????
	for (j = 0; ; j++)
	{
		if (shang[j] - '0')	//????????0?
		{
			k = j;	//?????
			break;
		}
	}
	if(j == count_num)	//???0
	{
		cout << "0" << endl;
	}
	else
	{
		for (j = k; j < count_num; j++)
		{
			cout << shang[j];	//????????
		}
		cout << endl;
	}
	cout << mod << endl;
	return 0;
}
