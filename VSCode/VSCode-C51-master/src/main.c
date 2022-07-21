// 0x3f,0x06,0x5b,0x4f,0x66,
// 0x6d,0x7d,0x07,0x7f,0x6f,
// 0x77,0x7c,0x39,0x5e,0x79,
// 0x71

// 0Xfe = 1111 1110 第一个灯亮。
// 0xfd = 1111 1101 第二个灯亮。
// 0xfb = 1111 1011 第三个灯亮。
// 0xf7 = 1111 0111 第四个灯亮。
// 0xef = 1110 1111 第五个灯亮。
// 0xdf = 1101 1111 第六个灯亮。
// 0xbf = 1011 1111 第七个灯亮。
// 0x7f = 0111 1111 第八个灯亮。
#include <reg52.h>  //引用单片机头文件
 
 
void delayMills(unsigned int ms) 
{	
         unsigned char i,j;
	for(j=ms; j>0; j--)	
		for(i=100;i>0;i--);	//空操作等待
}
 
void main(void)    //主函数，程序的入口
{    
    while(1)   //无限循环
    {  
       P0 = 0xfe;    //P0.0亮  1111 1110
       delayMills(1000);   //延时约1秒
       P0 = 0xfd;    //P0.1亮  1111 1101
       delayMills(1000);   //延时约1秒
       P0 = 0xfb;    //P0.2亮  1111 1011
       delayMills(1000);   //延时约1秒
       P0 = 0xf7;    //P0.3亮  1111 0111
       delayMills(1000);   //延时约1秒
       P0 = 0xef;    //P0.4亮  1110 1111
       delayMills(1000);   //延时约1秒
       P0 = 0xdf;    //P0.5亮  1101 1111
       delayMills(1000);   //延时约1秒
       P0 = 0xbf;    //P0.6亮  1011 1111
       delayMills(1000);   //延时约1秒
       P0 = 0x7f;    //P0.7亮  0111 1111
       delayMills(1000);   //延时约1秒
 
    }
}