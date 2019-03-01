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

float Convert_ASCII_to_FLOAT(u8 *s)
{
    float power,value;
    uint8_t i=0,flag=0;
    
    while((s[i] != '=')&&(s[i] != '>')) i++; 
    i++;              
    
    if(s[i] == '-')   
    {
        i++;
        flag = 1;
    }
    else if(s[i] == '+')  
    {
        i++;
        flag = 0;
    }
    
    for(value = 0.0;is_digit(s[i]);i++)
    value = value*10.0 + (s[i]-'0');
    if(s[i]=='.')
        i++;
    for(power = 1.0;is_digit(s[i]);i++)
    {
        value = value*10.0+(s[i]-'0');
        power *= 10.0;  
  }
    
    if(flag == 1)
    {
        return (float)(-1*(value/power));
    }
    else
    {
         return (float)(value/power);
    }       
}
