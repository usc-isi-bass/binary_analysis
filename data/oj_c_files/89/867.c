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
	int n;
	int i,j;
	cin>>n;
	int know[10000][2] = {0}; //??????????,???????????
	int *p;
	int flag = 0;//????????
	p = &know[0][0];//??????????
	while(1)
	{
		cin>>i>>j;
		if (i == 0 && j == 0)
			break;
		*(p + i * 2) += 1;//i?????+1
		*(p + j * 2 + 1) += 1;//??j???+1
	}
	for (i = 0; i <= n - 1;i++)
	{
		if (*(p + i * 2) == 0 && *(p + i * 2 + 1) == n - 1)//????0?,?n-1???,???? 
		{
			cout<<i<<endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout<<"NOT FOUND";
	return 0;
}