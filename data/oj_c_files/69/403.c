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
    char a1[260]={0};
    char b1[260]={0};
    cin.getline(a1,260);
    cin.getline(b1,260);
    int i,j,k,l1,l2;
    l1=strlen(a1);
    l2=strlen(b1);
    int c[300]={0};
    int a[300]={0};
    int b[300]={0};
    j=0;
    for(i=l1-1;i>=0;i--)
    {
      a[j]=a1[i]-'0';
      j++;
    }
    j=0;
    for(i=l2-1;i>=0;i--)
    {
       b[j]=b1[i]-'0';
       j++;
    }
    for(i=0;i<300;i++)
    {
      c[i]=a[i]+b[i]+c[i];
      if(c[i]>=10)
      {
        c[i]=c[i]%10;
        c[i+1]++;
      }
    }
    j=299;
    while(c[j]==0)
    {
      j--;
    }
    for(;j>=0;j--)
    {
      cout << c[j];
    }
    if((a[0]==0)&&(b[0]==0))
    {
      cout << 0;
    }
    cout << endl;
    cin.get(); cin.get(); cin.get();
    return 0;
}
