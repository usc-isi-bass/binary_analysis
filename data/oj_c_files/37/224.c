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
    int t;
    char a[100][1000],s;
    int i,j,l;
    int b[100][200]={0};
    cin >> t;
    cin.get();
    for(i=0;i<t;i++)
    {
       cin.getline(a[i],1000);
       l=strlen(a[i]);
       for(j=0;j<l;j++)
       {
           b[i][a[i][j]]=b[i][a[i][j]]+1;
       }
       for(j=0;j<l;j++)
       {
           if(b[i][a[i][j]]==1)
           {
              cout << a[i][j] << endl;
              break;
           }
       }
       if(j==l)
       cout << "no" << endl;
    }
    return 0;
}