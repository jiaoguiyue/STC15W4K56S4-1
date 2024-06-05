#include	"config.h"
#include	"GPIO.h"
#include	"delay.h"

/*************	功能说明	**************
本程序演示点亮几个LED灯。
程序使用P2口来演示，输出为高驱动。
******************************************/

/******************** IO配置函数 **************************/
void	GPIO_config(void)
{
	GPIO_InitTypeDef	GPIO_InitStructure;		//结构定义
	GPIO_InitStructure.Pin  = GPIO_Pin_All;		//指定要初始化的IO, GPIO_Pin_0 ~ GPIO_Pin_7, 或操作
	GPIO_InitStructure.Mode = GPIO_OUT_PP;		//指定IO的输入或输出方式,GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
	GPIO_Inilize(GPIO_P2,&GPIO_InitStructure);	//初始化
}

/******************** 主函数 **************************/
void main(void)
{
	u8	i,tmp;
	
	GPIO_config();
	
	P2=0xff;
	
}




