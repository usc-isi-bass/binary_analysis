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
  int num;
  scanf("%d",&num);
 if(num>9999&&num<100000)
 {int ten_thousand,thousand,hundred,ten,a;
	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
printf("%d%d%d%d%d\n",a,ten,hundred,thousand,ten_thousand);
 }
else
 if (num>999&&num<10000)
 {int ten_thousand,thousand,hundred,ten,a;
	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
printf("%d%d%d%d\n",a,ten,hundred,thousand);
 }
else
 if (num>99&&num<1000)
 {int ten_thousand,thousand,hundred,ten,a;
	ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
printf("%d%d%d\n",a,ten,hundred);
 }
else
 if (num>9&&num<100)
 {int ten_thousand,thousand,hundred,ten,a;
	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
printf("%d%d\n",a,ten);
 }
else
 if (num>0&&num<10)
 {int ten_thousand,thousand,hundred,ten,a;
	 	 ten_thousand=(int)(num/10000);
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
 a=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
printf("%d\n",a);
 }
return 0;
}