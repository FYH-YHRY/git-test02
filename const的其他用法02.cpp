//������������ʼ��һ������ָ��𴦵�ָ�룬�ؼ���const��λ��
#include<stdio.h> 
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	double * const pc=rates;//pcָ������Ŀ�ʼ
	printf("*pc=%lf,&pc=%p,&rates=%p\n",*pc,&pc,&rates);
	pc=&rates[2];           //��������Ϊ��ָ�벻��ָ���
	*pc=92.99;              //û����--����rates[0]��ֵ
	printf("*pc=%lf,&pc=%p,&rates=%p\n",*pc,&pc,&rates);
	return 0; 
}


#include<stdio.h> 
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	const double * const pc=rates;
	pc=&rates[2];    //������
	*pc=92.99;       //������
	return 0;
}
