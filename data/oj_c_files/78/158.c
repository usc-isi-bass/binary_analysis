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

int main()
{
 int z=10,
     s=20,
     l=30,
     q=40,
     t;
     if(z+l<q+s)
      {t=z;
       z=s;
       s=t;
       t=l;
       l=q;
       q=t;}
     if(z+s>=q)
       {q=q+10;
        l=l+10;}
      if(z<s)
       {cout<<"q "<<q<<endl;
        cout<<"l "<<l<<endl;
        cout<<"s "<<s<<endl;
        cout<<"z "<<z<<endl;
}
       else
       {        cout<<"l "<<l<<endl;
                cout<<"q "<<q<<endl;
                cout<<"z "<<z<<endl;
                cout<<"s "<<s<<endl;

}
return 0;
}
