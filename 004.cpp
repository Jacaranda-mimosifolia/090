#include<stdio.h>

int rate;  // ����rate 
int *p_rate;  // ָ��*p_rate 

//������ *ָ����;
//* indirection operator �������� 
//����ָ������һ��ָ�����������͵�ָ�룬������ָ�����������͵ı��� 

int main()
{
	scanf("%d",&rate);
	p_rate=&rate;  // ��rate�ĵ�ַ��ֵ��p_rate 
	
 	//ָ�� = &����; ��ʼ��ָ�� 
	//&����ȡַ�� 
	//�ñ���p_rate����rate�ĵ�ַ,��p_rateָ��rate 
	
	printf("Direct access,rate=%d\n",rate);
	printf("Indirect access,*p_rate=%d\n\n",*p_rate); 
	
	printf("The access of rate,&rate=%d\n",&rate);
	printf("The access of rate,p_rate=%d\n\n",p_rate);
	return 0;
}
