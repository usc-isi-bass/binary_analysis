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

char s[101];//?????????????
int l;//??????
int f(int k){//????
int i,j;
for(i = k;i >= 0;i--)//??????
  if(s[i] == '(')
  {
   for(j = i + 1;j < l;j++)
    if(s[j] == ')')//????????????
    {
      s[i] = 'a';//?????????
      s[j] = 'a';
      k = i;
      return f(k);//??
    }
  }
for(i = 0;i < l;i++)//??
{
  if(s[i] == '(')
   cout << '$';
  else if(s[i] == ')')
   cout << '?';
  else
   cout << ' ';
}
cout << endl;
return 0;
}
int main(){
while(scanf("%s",s)!=EOF){
  l = strlen(s);
  cout << s << endl;
  f(l - 1);//????
}
return 0;
}