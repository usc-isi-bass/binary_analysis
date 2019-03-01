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
    int n=0,i=0;
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
       int num[26]={0};
       int j=0;int flag=0;
       char shuru[100]={0};
       cin.getline(shuru,100);
       for(j=0;shuru[j]!='\0';j++)
       num[(int)shuru[j]-97]=num[(int)shuru[j]-97]+1;
       for (j=0;shuru[j]!='\0';j++)
       {
           if (num[(int)shuru[j]-97]==1)
           {cout<<shuru[j]<<endl;flag=1;break;}
       }
       if (flag==0)
       cout<<"no"<<endl;
    }    return 0;
}