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

//????????
//??????
int f(int a,int m)                 //???a???????m?????????
{ 
if(a<m) 
return 0; 
int kind=1; 
for(int i=m;i<a;i++)
{ 
if(a%i==0)                         //??????????????
kind=kind+f(a/i,i); 
} 
return kind; 
} 
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)     //??n???
		cin>>a[i];
	for(int i=0;i<n;i++)
		cout<<f(a[i],2)<<endl;    //????
	return 0;
}
