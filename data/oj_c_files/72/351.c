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

int high(int h,int i,int j);
int away(int i,int j);
int num[30][30],m,n;
int main()
{
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>num[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		if(high(num[i][j],i,j)==1)
			cout<<i<<" "<<j<<endl;
	return 0;
}
int high(int h,int i,int j)
{
	int count1=0;
	if(num[i-1][j]<=h||away(i-1,j)==1)
		count1++;
	if(num[i+1][j]<=h||away(i+1,j)==1)
		count1++;
	if(num[i][j-1]<=h||away(i,j-1)==1)
		count1++;
	if(num[i][j+1]<=h||away(i,j+1)==1)
		count1++;
	if(count1==4)
		return 1;
	return 0;
}
int away(int i,int j)
{
	if(i<0||i>=m)
		return 1;
	if(j<0||j>=n)
		return 1;
	return 0;
}