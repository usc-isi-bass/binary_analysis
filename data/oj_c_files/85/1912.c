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

int main()                           //?????            
{ 
  char a[100];                       //???????
                                     
  int n;
  cin>>n;                           //??????n?????? ???
  cin.getline(a,1000);              //????????
  for(;n>0;n--)
  {
      cin.getline(a,1000);         //?????
      if((a[0]<65||a[0]>90&&a[0]<97||a[0]>97+25)&&a[0]!='_') 
      {cout<<"no"<<endl;continue;} //???????????no????????     
      int i;
      for(i=1;;i++)                 //???????????????
      {
        if(a[i]==0)
         { 
           cout<<"yes";break;
         }
         if(a[i]>=65&&a[i]<=90)    continue;
         if(a[i]<=97+25&&a[i]>=97) continue;
         if(a[i]>=48&&a[i]<=48+9)  continue;
         if(a[i]=='_')    continue;
         cout<<"no";
         break;   
      } 
     cout<<endl;
 }        

  return 0;                     //?????
}
