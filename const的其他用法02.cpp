//可以声明并初始化一个不能指向别处的指针，关键是const的位置
#include<stdio.h> 
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	double * const pc=rates;//pc指向数组的开始
	printf("*pc=%lf,&pc=%p,&rates=%p\n",*pc,&pc,&rates);
	pc=&rates[2];           //不允许，因为该指针不能指向别处
	*pc=92.99;              //没问题--更改rates[0]的值
	printf("*pc=%lf,&pc=%p,&rates=%p\n",*pc,&pc,&rates);
	return 0; 
}


#include<stdio.h> 
int main()
{
	double rates[5]={88.99,100.12,59.45,183.11,340.5};
	const double * const pc=rates;
	pc=&rates[2];    //不允许
	*pc=92.99;       //不允许
	return 0;
}
