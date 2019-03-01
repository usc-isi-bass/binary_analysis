#include <stdint.h>
#include <math.h>

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

char *Float_to_String(float number,char *strnum,uint8_t precision)
 {
     uint8_t j=0,i=0,n=0;
     uint8_t temp,flag=0;
     int32_t integer;
     float   decimal;
         
     if(number < 0)
     {
         flag = 1;
         number = -number;
     }
     
     integer = (int32_t)(number/1);
     decimal = (float)(number-integer);
         
     do
      {
            *(strnum+n) = integer%10+48;
            integer = integer/10;
            n++;
        }while(integer>0);
        
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
         strnum[n]='.';
         n++;
         integer = (int32_t)(decimal*pow(10,precision));        
                 
         
        
        
         while(precision){
             precision--;
             *(strnum+n+j) = integer/(int32_t)pow(10,precision)+48;
             integer = integer%(int32_t)(pow(10,precision));
             j++;
             
             
         }
        
         strnum[n+j] = '\r';
         strnum[n+j+1] = '\n';
         strnum[n+j+2]= '\0';
         
         return strnum;
 }
 