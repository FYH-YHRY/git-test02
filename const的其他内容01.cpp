//���ȣ���const���ݻ��const���ݵĵ�ַ��ʼ��Ϊָ��const��ָ���Ϊ�丳ֵ�ǺϷ��� 
/*#include<stdio.h>
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	const double locked[4]={0.08,0.075,0.0725,0.07};
	const double *pc=rates;                           //��Ч 
	printf("*pc=%lf,&pc=%p,&rates[0]=%p\n",*pc,&pc,&rates[0]);
	pc=locked;                                        //��Ч
	printf("*pc=%lf,&pc=%p\n",*pc,&pc);
	pc=&rates[3];                                     //��Ч
	printf("*pc=%lf,&pc=%p\n",*pc,&pc);
	return 0;
}*/
//Ȼ����ֻ�ܰѷ�const���ݵĵ�ַ������ָͨ��
#include<stdio.h> 
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	const double locked[4]={0.08,0.075,0.0725,0.07};
	double *pnc=rates;                                //��Ч
	printf("*pnc=%lf,&pnc=%p,&rates=%p\n",*pnc,&pnc,&rates);
	pnc=locked;                                      //��Ч
	printf("*pnc=%lf,&pnc=%p\n",*pnc,&pnc);
	pnc=&rates[3];                                   //��Ч 
	printf("*pnc=%lf,&pnc=%p\n",*pnc,&pnc);
	return 0;
}
