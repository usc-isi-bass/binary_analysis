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
 int n=0;
 cin>>n;
 for(int k=0;k<n;k++)
 {
  int m=0,number=0,temp=0;
 int a[100]={0};
 a[0] = 60;
 cin>>m;                        //???????
 for(int i=1;i<=m;i++)          //???????????
  cin>>a[i];                        //??????????????????????
 for(int i=0;i<=m;i++)
 {
      temp=a[m-i]+3*(m-i);
      if(temp<=60)                             //?m-i???????
      {
       number=60-3*(m-i);
       cout<<number<<endl;break;
      }
      else if(temp>60&&temp<=63)
      {
           cout<<a[m-i]<<endl;break;
      }
           
 }
}
}