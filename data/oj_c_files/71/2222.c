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
int n,a,b,c,i;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a>>b>>c;
if(a%4==0&&(a%100!=0||a%400==0))
{
int m[12]={0,3,4,7,9,12,14,17,20,22,25,27};
if((m[b-1]-m[c-1])%7==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
else
{
int p[12]={0,3,3,6,8,11,13,16,19,21,24,26};
if((p[b-1]-p[c-1])%7==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
return 0;
}

	

