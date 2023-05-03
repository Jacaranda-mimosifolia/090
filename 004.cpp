#include<stdio.h>

int rate;  // 变量rate 
int *p_rate;  // 指针*p_rate 

//类型名 *指针名;
//* indirection operator 间接运算符 
//表明指针名是一个指向类型名类型的指针，而不是指向类型名类型的变量 

int main()
{
	scanf("%d",&rate);
	p_rate=&rate;  // 把rate的地址赋值给p_rate 
	
 	//指针 = &变量; 初始化指针 
	//&物理取址符 
	//用变量p_rate储存rate的地址,即p_rate指向rate 
	
	printf("Direct access,rate=%d\n",rate);
	printf("Indirect access,*p_rate=%d\n\n",*p_rate); 
	
	printf("The access of rate,&rate=%d\n",&rate);
	printf("The access of rate,p_rate=%d\n\n",p_rate);
	return 0;
}
