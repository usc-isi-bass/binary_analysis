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

int n,i;//????  n ???????
int f(int a,int min){      //??????f  ?????a n
if(a < min){     //?????a ??n
return 0;     //????0?   ???????????
}
int result = 1;       //???????  ???1
for(int i = min;i<a;i++){   //for?? ? ??????a
if(a % i == 0){   //?a???i???
result += f(a/i,i);  //???? ??result
}
}
return result; //??????
}
      int main(){  //?????
    	  cin>>n;//??????
    	  int a[n];
    	  for(i=0;i<n;i++){   //????
    		  cin>>a[i];
    	  }
    	  for(i=0;i<n;i++){
    	  cout<<f(a[i],2)<<endl;  //??????????  ????
    	  }
    	  return 0;
      }