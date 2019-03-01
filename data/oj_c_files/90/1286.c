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

/********************/
/*    ?????    */
/*     pyyaoer      */
/*   2011.11.26     */
/********************/
int NUM=0;
void num(int,int);              //????
int main()
{
	int p,i,m[21],n[21];
	cin>>p;
	for (i=1;i<=p;i++)         //????p???       
	{
		cin>>m[i]>>n[i]; 
		num(m[i],n[i]);       //????
		cout<<NUM<<endl;
		NUM=0;                //????
	}
	return 0;
}
void num(int m,int n)        //?????
{
	if (m==0||n==1)
		NUM=NUM+1;
	else if (m<n)
		 num(m,n-1);         //m??n???????????
	else
	{
		 num(m,n-1);        //??????????m-n?????n???
		 num(m-n,n);
	}
}