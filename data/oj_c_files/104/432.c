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

/**
 *???4.cpp
 *??????
 *??????
 *???11?26
 */
void route(int n,int a[],int c[])   //???????????????????????????
{
      c[0]=0;
      if(n==1)
	  {a[0]=1;}
      else
	  {route(n/2,a,c);
       c[0]++;
       a[c[0]]=n;}
}
int main()
{
    int x,y,x1;
    int a[12]={0},b[12]={0},c[2];
	cin>>x>>y;
    route(x,a,c);       //??x,y????????a,b?
    route(y,b,c);
    int n1,n2;
    for(n1=0;a[n1]!=0;n1++);  //???????????
    for(n2=0;b[n2]!=0;n2++);
    int j,k,flag=1;
    for(j=n1-1;j>=0;j--)
	{
         for(k=n2-1;k>=0;k--)
		 {
              if(a[j]==b[k])   //???????????????????????
			  {
                  x1=a[j];   //??????????x1
				  flag=0;
                  break;
			  }
		 }
		 if(flag==0)
		 {break;}
		 else
		 {continue;}
	}
	cout<<x1<<endl;   
	return 0;
}