//首先，把const数据或非const数据的地址初始化为指向const的指针或为其赋值是合法的 
/*#include<stdio.h>
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	const double locked[4]={0.08,0.075,0.0725,0.07};
	const double *pc=rates;                           //有效 
	printf("*pc=%lf,&pc=%p,&rates[0]=%p\n",*pc,&pc,&rates[0]);
	pc=locked;                                        //有效
	printf("*pc=%lf,&pc=%p\n",*pc,&pc);
	pc=&rates[3];                                     //有效
	printf("*pc=%lf,&pc=%p\n",*pc,&pc);
	return 0;
}*/
//然而，只能把非const数据的地址赋给普通指针
#include<stdio.h> 
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	const double locked[4]={0.08,0.075,0.0725,0.07};
	double *pnc=rates;                                //有效
	printf("*pnc=%lf,&pnc=%p,&rates=%p\n",*pnc,&pnc,&rates);
	pnc=locked;                                      //无效
	printf("*pnc=%lf,&pnc=%p\n",*pnc,&pnc);
	pnc=&rates[3];                                   //有效 
	printf("*pnc=%lf,&pnc=%p\n",*pnc,&pnc);
	return 0;
}
