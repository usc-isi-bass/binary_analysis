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
    int k,n,m,sum; 
    cin>>k;
    int a[100][100];
    for(int l=1;l<=k;l++)
    {
      cin>>m>>n;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
      }
      sum=0;
      if(m>1)
      {
        for(int i=0;i<n;i++)
        sum=sum+*(*a+i);//??????? 
        for(int i=0;i<n;i++)
        sum=sum+*(*(a+m-1)+i);//???????? 
      }
      if(m==1)//??????? 
      {
        for(int i=0;i<n;i++)
        sum=sum+*(*a+i);
      }
      if(n>1)
      {
        for(int i=1;i<m-1;i++)
        sum=sum+*(*(a+i));//??????? 
        for(int i=1;i<m-1;i++)
        sum=sum+*(*(a+i)+n-1);//???????? 
      }
      if(n==1)//?????? 
      {
        for(int i=1;i<m-1;i++)
        sum=sum+*(*(a+i));
      }
      cout<<sum<<endl;
    }
    return 0;
}
