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

/*
 * ???????.cpp
 *
 *  Created on: 2011-12-21
 *      Author:???
 */

int main(){
   int n,a[300],i;
   cin>>n;
   cin>>a[1];
   int min=a[1],max=a[1];//?????????
   double sum=a[1]+0.0;  //???
   for(i=1;i<n;i++){     //???????????????
	   cin>>a[i];
	   sum+=a[i];
	   if(a[i]<min)min=a[i];
	   else if(a[i]>max)max=a[i];
   }
   if(2*sum/n>max+min)cout<<min<<endl;//????????????????????
   else if(2*sum/n<max+min)cout<<max<<endl;
   else cout<<min<<","<<max;
   return 0;
}
