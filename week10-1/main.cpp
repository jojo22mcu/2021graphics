#include <windows.h>
#include <stdio.h>///for getchar()
int main()
{
    char c;
    while(1)
    {
        c=getchar();
        if(c=='1')PlaySound("do.wav",NULL,SND_ASYNC);
        if(c=='2')PlaySound("re.wav",NULL,SND_ASYNC);
        if(c=='3')PlaySound("mi.wav",NULL,SND_ASYNC);
        if(c=='4')PlaySound("fa.wav",NULL,SND_ASYNC);
        ///SND_SYNC�O�n"���ݦP�B"...�|�����A�~��
        ///SND_ASYNC�O"�����ݦP�B",���W�U�@��
    }
}
