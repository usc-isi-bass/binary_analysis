#include<stdio.h>
#include<string.h>

char *reverse(char*s){
  unsigned int len = strlen(s), i= 0, j=0, temp =0;
  for(i=0, j=len-1; i<j; i++,j--){
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
  return s;
}

char* itoa(int n){
  char t[100] = "";
  char *s = t;
  int i=0, sign=0;

  if((sign=n)<0)
    n = n*-1;

  for(i=0;n>0;i++){
    s[i] = (n%10) + '0';
    n = n/10;
  }
  
  if(sign<0)
    s[i++] = '-';

  s[i]='\0';

  s = reverse(s);
  return s;
}