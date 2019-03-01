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
	int days[13]={0,12,31,28,31,30,31,30,31,31,30,31,30};
	int result[13]={0};   //?result?????13?????
	int sum=0;      //?sum????????k???????
	int w;   //??????????
	cin>>w;
	for(int k=1;k!=13;k++)
	{
		sum+=days[k];
		result[k]=(sum+w)%7;
	}
	for(int k=1;k!=13;k++)
		if(result[k]==5)
			cout<<k<<endl;
	return 0;
}
