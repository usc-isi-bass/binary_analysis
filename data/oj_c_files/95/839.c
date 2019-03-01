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

char change(char x)
 {if (x>64&&x<91) return(x+32);
  else return x;
  }

int main()
{char a[81],b[81],i;
 cin.getline(a,81);
 cin.getline(b,81);
 i=0;
for(;;)
 {if(change(a[i])>change(b[i])) {cout<<'>';break;}
  else if(change(a[i])<change(b[i])) {cout<<'<';break;}
  else if(a[i]!='\0') i++;
  else {cout<<'=';break;}
  }
 return 0;
}
