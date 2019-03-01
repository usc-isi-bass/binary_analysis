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
	int sushu(int k);
	int n,i;
    cin>>n;
	if(n<5)
	{
		cout<<"empty"<<endl;
	}
	else
	{
	    for(i=2;i<n-1;i++)
		{
		     if(sushu(i)==1&&sushu(i+2)==1)
			 {
			       cout<<i<<' '<<i+2<<endl;
			 }
		}
	}
	return 0;
}
 
int sushu(int k)
{
	int t,j,l=0;
    if(k>2)
	{
	    for(j=2;j<k;j++)
		{
		     if(k%j==0)
			 {
			      l++;
			 }
		     else
			 {
			      l=l;
			 }
		}
	}
	else if(k==1||k==2)
	{
		l=0;
	}
	if(l==0) t=1;
	else  t=0;
	return(t);
}
	


			


