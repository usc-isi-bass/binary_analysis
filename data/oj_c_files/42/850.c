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
	int a[100001]={0};
 int i,n,k,num=0;
 cin>>n;
 for(i=1;i<=n;i++)
 {
  cin>>a[i];
 }
 cin>>k;
 for(i=1;i<=n-num;i++)
 {
	 int j;
 if(a[i]==k)
 {
	 j=i;
	 while(j<n-num)
	 {
	  a[j]=a[j+1];j++;
	 }
	 num++;
	 i--;                      //??????????
 }
  }
 i=1;
 while(i<=n-num)             //????????a?1???????????????????
 { 
	 if(i==1)
		 cout<<a[1];
	 else
  cout<<" "<<a[i];
	 i++;
 }
 return 0;
}