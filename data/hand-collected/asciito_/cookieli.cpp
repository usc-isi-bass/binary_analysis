#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double Atof(char s[])
{
    double val,power;
    int exp;
    int i ,sign;
    for(i = 0 ; isspace(s[i]) ; i++);
    sign = (s[i]=='-')? -1:1;
    if(s[i]=='-'||s[i]=='+')
        i++;
    for(val = 0.0 ; isdigit(s[i]) ; i++)
        val = 10.0*val + (s[i] - '0');
        if(s[i] =='.') i++;
    for(power = 1.0 ; isdigit(s[i]) ; i++){
        val = 10.0*val + (s[i] - '0');
        power *= 10;
    }
     val = sign*val/power;
     if(s[i] =='e'||s[i] =='E'){
        i++;
        sign =(s[i]=='-')?-1:1;
     if(s[i]=='-'||s[i]=='+')
        i++;
       for(exp = 0 ; isdigit(s[i]) ; i++){
           exp = 10*exp +(s[i]-'0');
       }
       while(exp-->0){
          if(sign == 1) val *= 10;
          else          val /= 10;
       }
     }
     return val;
}