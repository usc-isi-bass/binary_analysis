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

//??????????
//??????
//?????2011-1-8


int main()
{
    int n,i,j,count[200000]={0},check[200000]={0};
    cin>>n;
    while (true)
    {
          cin>>i>>j;
          if ((i==0)&&(j==0)) break;
          count[j]++;//??j??+1 
          check[i]++;//i????+1 
    }
    for (i=0;i<n;i++) 
      if ((count[i]==n-1)&&(check[i]<n-1)) {cout<<i;return 0;}//?????????? 
    cout<<"NOT FOUND";
    return 0;
}
