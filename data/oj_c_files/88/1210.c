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

//***********************************************
//*   ????????                                  * 
//*   ??????                                          *
//*   ???12?24?                                     * 
//***********************************************
int main()
{
   char a[35];
   cin.getline(a,32);                             //????? 
   int l=strlen(a);                               //???? 
   int i=0,k=0;
   while(i<l)
   {
      if(a[i]>='0' && a[i]<='9')                  //??????????? 
      {
         int count=1,j=i+1;
         while(a[j]>='0' && a[j]<='9')
         {
            count++;                              //????????? 
            j++;
         }
         for(k=i;k<i+count;k++)
         {
            cout<<a[k];                           //??????? 
         }
         cout<<endl;
         i=i+count;                               //?????i??????? 
      }
      else i++;
   }
   return 0;
}
