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

int main ()
{
	int a[105][105]={0},row,col;
	cin>>row>>col;
	for (int i=1;i<=row;i++)
		for (int j=1;j<=col;j++)
			cin>>*(*(a+i)+j);//??????
	for (int i=1;i<=col;i++){//????????????????
		int k=1;
		while (k<=row && i-k+1>=1){
			cout<<*(*(a+k)+i-k+1)<<endl;
			k++;
		}
	}
	for (int i=2;i<=row;i++){//?????????????????
		int k=0;
		while (i+k<=row && col-k>=1){
			cout<<*(*(a+i+k)+col-k)<<endl;
			k++;
		}
	}
	return 0;
}