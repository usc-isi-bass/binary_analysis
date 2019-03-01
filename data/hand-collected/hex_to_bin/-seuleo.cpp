 
typedef union 
{
    u8 CharData[4];
    u32 Int32Data;    
} HEX_Int32;
    
 
u32 Hex_to_Int32(u8 *hex)
{
    HEX_Int32 HEXInt32;
    if(hex==(u8*)0)
        return 0.0;    
    HEXInt32.CharData[0]=hex[3];
    HEXInt32.CharData[1]=hex[4];
    HEXInt32.CharData[2]=hex[5];
    HEXInt32.CharData[3]=hex[6];
    return HEXInt32.Int32Data;
    
}