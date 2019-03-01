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
	int n;                                //n????????
	int shun[100];int ni[100];            //shun?????,ni?????
	cin>>n;
	for(int i=0;i<n;i++)                  //??????????
	{
		cin>>shun[i];
	}
	for(int j=0;j<n;j++)                  //????????????????
	{
		ni[j]=shun[n-1-j];
	}
	cout<<ni[0];                          //??ni??
	for(int k=1;k<n;k++)
	{
		cout<<' '<<ni[k];
	}
	return 0;
}