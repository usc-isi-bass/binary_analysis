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
    int n;
    cin>>n;
    int high,low;//???????
    int j=0;
    int flag[n];//???????????????
    for(int k=0;k<n;k++)  flag[k]=0;//????????0
    for(int i=0;i<n;i++)
      {
          cin>>high>>low;
          if(high<=140&&high>=90&&low>=60&&low<=90)  flag[j]++;//????????????????????+1
          else j++;   //???????????????????
      }
    int max=flag[0];
    for(int l=0;l<n;l++)
       {
           if(flag[l]>max)
              max=flag[l];//??????????????
       }
    cout<<max<<endl;
    return 0;
}

