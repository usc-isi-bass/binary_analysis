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


int num;

void func(){
  if (num & 1) {
    cout << num << "*3+1=" << num * 3 + 1 << endl;
    num = num * 3 + 1;
  }
  else {
    cout << num << "/2=" << num / 2 << endl;
    num /= 2;
  }
}

int main(){
  cin >> num;
  while (num != 1){
    func();
  }
  cout << "End" << endl;

  return 0;
}
