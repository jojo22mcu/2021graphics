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
        ///SND_SYNC是要"等待同步"...會播完再繼續
        ///SND_ASYNC是"不等待同步",馬上下一行
    }
}
