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
    char a[100][100];
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>a[i];
      int num[27]={0};
      int len=0;
      int temp=0;
      len=strlen(a[i]);
      for(j=0;j<len;j++)
      num[a[i][j]-'a'+1]++;
      for(j=1;j<=26;j++)
        if(num[j]!=1)
          temp++;
      if(temp==26) 
        cout<<"no"<<endl;
      else
        {
           for(j=0;j<len;j++)
           {
              if(num[a[i][j]-'a'+1]==1)
                {
                                       cout<<a[i][j]<<endl;
                                       break;
                }
           }
        }
           
      
    }
    
}