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
  int a,b,num[100],top=0;//???????a?b
  char s[100];//???????s
  cin>>a;//??????
  cin>>s;
  cin>>b;
  int i;
  for(i=0;s[i]!='\0';i++){
   if((s[i]>=65)&&(s[i]<=90))//??????????????? 
    num[i]=s[i]-'A'+10;
   else if((s[i]>=90)&&(s[i]<=122))//?????????????
    num[i]=s[i]-'a'+10;
   else if((s[i]>='0')&&(s[i]<='9'))//???????????
    num[i]=s[i]-'0';
   top++;
  }
 long int sum=0;//??sum
  for(i=0;i<top;i++)//?sum????
     sum=sum*a+num[i];
char s1[10000];//???????
  int j;//??j
  if(sum==0)  cout<<"0"<<endl;//??sum??????0
  else/* ????????   */
  {for(j=0;sum;j++){
  if((sum%b)>9)   s1[j]=(char)((sum%b)-10+'A');
  else s1[j]=(char)((sum%b)+'0');
  sum=sum/b;
 
 
  }
  for(j=j-1;j>=0;j--){
  cout<<s1[j];
 
  }
 
 
  
  cout<<endl;}
 return 0;//?????
}

