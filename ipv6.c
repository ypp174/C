#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

bool isvalid(char a)
{
    if ((a<='F' && a>='A')||(a<='f' && a>='a')|| (a<='9' && a>='0')|| a==':')
        return true;
return false;
}

int main()
{
    //char a[] = "1111:2222:1112::1111:1111:1111:1:";
    char a[39]="";
    scanf("%s",a);
    uint16_t len = strlen(a);
    bool valid=false;
    bool compress_flag = false;
    printf("len = %d\n",len);

    if(len>1 && len<=39)
    {
        for (int i=0;i<len;i++)
        {
            if(a[i]==':' && i<len-1 && a[i+1]==':')
            {
                if(compress_flag == false)
                {   
                    compress_flag = true;
                    continue;
                }
                valid=false;
                break; 
            }
                
            if(!isvalid(a[i]))
            {
                valid=false;
                break;
            }
            valid=true;
        }
    }    
    if(valid) 
        printf("\n%s","VALID");
    else
        printf("\n%s","INVALID");
}
