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
 * ??????????
 * ?????2011?11?14?
 * ??????
 * ?????
 */
int main()
{                                  //?????
int i,j,k,m,n;              //????
    cin>>n>>k;                     //?????n?k
if(n==1)
{cout<<"1"<<endl;
 return 0;}                        //???????? ??????
for(i=1;;i++)
  { m=i*n+k;
   for(j=1;j<=n-1;j++){
    if(m%(n-1)==0){
	if(j==(n-1)){
	cout<<(n*m/(n-1)+k)<<endl;     //????????
	return 0;}
	m=n*m/(n-1)+k;
	continue; }
else break;  } }
return 0;
}                                  //?????