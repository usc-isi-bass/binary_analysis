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
{ double a,b,c,d,jiao;int fanhui;
  double mianji(double aa,double bb,double cc,double dd,double jiaojiao);
  scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&jiao);
  c=mianji(a,b,c,d,jiao);
  if(c==0)printf("Invalid input");
  else printf("%.4f",c);
  getchar();
  getchar();
}
double mianji(double aa,double bb,double cc,double dd,double jiaojiao)
{ double s,ban,panduan,fanhui;
  ban=(jiaojiao*0.01745329)/2.0000;
  s=(aa+bb+cc+dd)/2.0000;
  panduan=(s-aa)*(s-bb)*(s-cc)*(s-dd)-aa*bb*cc*dd*cos(ban)*cos(ban);
  if(panduan>0)fanhui=sqrt(panduan);
  else fanhui=0;
  return fanhui;}