#include <math.h>
#include <stdint.h>

uint8_t is_digit(u8 ch)  
{  
    if(ch>='0'&&ch<='9')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_letter(u8 ch)  
{  
    if(ch>='A'&&ch<='Z')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_space(u8 ch)  
{  
    if(ch==' ')  
        return 1;  
    else  
        return 0;  
}

uint8_t is_inquiry(u8 *s)
{
    uint8_t i=0;
    
    while(s[i] != '=') i++;
    i++;               
    if(s[i] == '?')
            return 1;
    else
        return 0;
}

char *Int_to_String(int16_t number,char *strnum)
 {
     uint8_t i=0,n=0,flag=0;
     uint8_t temp;
     if(number < 0)
     {
         flag = 1;
         number = -number;
     }
     
     do{
         *(strnum+n) = number%10+48;
         number = number/10;
            n++;
     }while(number > 0);
     
     if(flag)
         {
             *(strnum+n) = '-';
             n++;
         }
         
         for(i=0;i<n/2;i++)
         {
             temp = *(strnum+i);
             *(strnum+i) = *(strnum+n-i-1);
             *(strnum+n-i-1) = temp;
         }
         
         strnum[n] = '\r';
         strnum[n+1] = '\n';
         strnum[n+2]= '\0';
         
         return strnum;
 }