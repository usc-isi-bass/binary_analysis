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
    int gujiao(int n);
    int n;
    cin >> n;
    gujiao(n);
    return 0;
}
int gujiao(int n){ 
    if (n == 2){
          cout << "2/2=1" << endl << "End" << endl;
          }
    else{
         if(n%2 == 0){
                cout << n << "/2=" << n/2 << endl;
                return gujiao(n/2);
                }
         else{
              if (n == 1){
                    cout << "End" << endl;
                    }
              else{
                   cout << n << "*3+1=" << n*3+1 << endl;
                   return gujiao(n*3+1);
                   }
              }
         }
}
