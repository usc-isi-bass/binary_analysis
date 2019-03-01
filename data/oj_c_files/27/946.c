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


int main(){
  int n;
  cin >> n;
  double a,b,c,delta;
  for (int i=1; i<=n ;++i){
         cin >> a >> b >> c;
         delta = b*b - 4*a*c;
         if (delta == 0){
           cout << "x1=x2=";
           printf("%.5f", (-b)/(2*a));
           }
         if (delta > 0 ){
                     cout << "x1=";
                     printf("%.5f", (-b + sqrt(b*b-4*a*c))/(2*a)); 
                     cout << ";x2=";
                     printf("%.5f", (-b - sqrt(b*b-4*a*c))/(2*a));
                   }
         if (delta < 0){
                     delta = -delta;
                     double shi,xu;
                     shi = (-b)/(2*a); xu = (sqrt(delta))/(2*a);
                     if (shi == 0) shi=0; 
                     cout << "x1=";
                     printf("%.5f", shi);
                     cout << "+";
                     printf("%.5f", xu);
                     cout << "i;";
                     cout << "x2=";
                     printf("%.5f", shi);
                     cout << "-"; 
                     printf("%.5f", xu);
                     cout << "i" ;   
                   }
         cout << endl; 
      }
  return 0;
} 