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

//********************************
//*???????? **
//*?????1300062805 **
//*???2013.11.2 **
//********************************
int a[1001];
int main()
{
	int i, x, y, k = 1, j = 0, sum = 0;
    for(i = 1; ;i ++)             // ??????????????????  
    {   
        cin >> x;
        a[x]++;
        if( cin.get()!= ',')
       {
          k = i;                 //?????? 
          break;       
       }   
    }     
       for(i = 1; ;i ++)         // ?????????????????? 
    {   
        cin >> y;
        a[y]--;
      if( cin.get()!= ',')
       {
          break;       
       }   
    }     
      for(i = 0; i <= 1000; i++)  //????????????????????? 
      { 
		sum = sum + a[i];
        if(sum >= j)
        {
          j = sum ;     
		}
        
      }              
        cout << k <<" "<< j << endl;//?????????????????? 
       return 0;
}