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
    char a[99];
    int n=0;
    int b[99]={0};
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
       {
        cin.getline(a,90);
        if((a[0]=='_')||(a[0]==' ')||(a[0]==32)||((a[0]>=65)&&(a[0]<=90))||((a[0]>=97)&&(a[0]<=122)))
           b[i]=1;
        for(int j=0;j<strlen(a);j++)
           if(a[j]==' ')
              b[i]=0;
           for(int m=0;m<strlen(a);m++)
              if(!(((a[m]>=65)&&(a[m]<=97))||((a[m]>=97)&&(a[m]<=122))||((a[m]>=48)&&(a[m]<=57))||(a[m]==' ')))
               b[i]=0;
        }
    for(int k=0;k<n;k++)
       cout<<b[k]<<endl;
    return 0;
}
