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
	float a[100],b[100],c=0;//????a?b??????
	int m,n[100],i,k;//m?????n????????
	cin>>m;
	for(k=0;k<m;k++)
	{
		cin>>n[k];}//?????
	for(k=0;k<m;k++)//????
	{

	for(i=1;i<n[k]+1;i++)//?????????
	{
		a[0]=2;
	    b[0]=1;
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
	}
	for(i=0;i<n[k];i++)
	{
	c=c+a[i]/b[i];//???
	}
	printf("%.3f",c);
	cout<<endl;
	c=0;
	}
	getchar();
	getchar();
	return 0;
}
	

