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

void out(int sum,int row,int col,int (*a)[200])//????????????????
{
	int i;//i???,sum-i???????
	if(sum<=col-1)//??
	{
		for(i=0;sum-i>=0 && i<=row-1;i++)
			cout << *(*(a+i)+sum-i) << endl;
	}else{
		for(i=sum-(col-1);sum-i>=0 && i<=row-1;i++)
			cout << *(*(a+i)+sum-i) << endl;
	}
}
int main(){
int c,r;
cin >> c >> r;
int a[200][200];
for(int i=0;i<c;i++)
	for(int j=0;j<r;j++)
		cin >> *(*(a+i)+j);
for(int sum=0;sum<=c+r-2;sum++)
	out(sum,c,r,a);
return 0;
}