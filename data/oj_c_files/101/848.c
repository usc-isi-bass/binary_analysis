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
 * bifanliang.cpp
 *
 *  Created on: 2012-10-21
 *      Author: ??
 *      ????????3??????
 */


int main(){
     int A,B,C,i;                    //????

     for(A=0; A<=2 ;A++)
        for(B=0; B<=2 ;B++)
    	  for(C=0 ;C<=2 ;C++)
    	      for(i=0 ;i<=2 ;i++)  //A,B,C??????

      if((B>A)+(C==A)+A==2
          &&(A>B)+(A>C)+B==2
          &&(C>B)+(B>A)+C==2)       //????????????????
     {if(A==i) cout<<"A";
      if(B==i) cout<<"B";
      if(C==i) cout<<"C";}          //????????

     return 0;

}
