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
    char a[10][10]={{0}};
    int i=0,j=0;
    int count=1;
    while(cin.get(a[i][j]))//????
    {
      if(a[i][j]==' '){i++;j=0;count++;}//????????????
      else if(a[i][j]=='\n')break;//?????????
      else j++;
    }//???a????????????
    if(count==1)//??
    {for(i=0;i<10;i++)
    {if(a[count-1][i]=='\n')break;
     else cout<<a[count-1][i];}
    }
    if(count!=1)
    {for(i=0;i<10;i++)//????????
    {if(a[count-1][i]=='\n')break;
     else cout<<a[count-1][i];}
     cout<<" ";}
    for(i=count-2;i>0;i--)//??????
      {for(j=0;j<10;j++)
        {cout<<a[i][j];if(a[i][j]==' ')break;}
      }
    if(count!=1)//???????
    {for(i=0;i<10;i++)
    {
      if(a[0][i]==' ')break;
      else cout<<a[0][i];
    }}
    cin>>i;
}

