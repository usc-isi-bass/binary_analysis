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
?? ???2009???? 
?? 
????????????????????????????????????????????????????????????
 
???? 
??????k????k???? 
????????????????? 
???????????m???n?m<100?n<100???????????? 
??????m?????????n???????????????? 

 
???? 
??????????????????
 
???? 
1
4 4
1 1 1 1
0 0 0 0
1 0 1 0
0 0 0 0
 
???? 
5

 */


int main()
{
    int a[101][101];
	int n,k,row,col,i,j,sum=0;

cin>>n;

for (k=1;k<=n;k++)
{
	cin>>row>>col;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
		{
			cin>>a[i][j];
		}
	}
	for (j=1;j<=col;j++)    sum=sum+a[1][j];
	for (i=2;i<=row;i++)    sum=sum+a[i][col];
	for (j=1;j<=col-1;j++)  sum=sum+a[row][j];
	for (i=2;i<=row-1;i++)  sum=sum+a[i][1];
	cout<<sum<<endl;
	sum=0;
}

	return 0;

}