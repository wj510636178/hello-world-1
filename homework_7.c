//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
#include<math.h>
int main()
{
    float m ;
    float x ; 
    printf("����������������\n"); 
    scanf("%f%f",&m,&x);
    if(fabs(m-x)<0.00001){
    	printf("���������������\n");
	}else{
		printf("�����������������"); 
	}
    return 0;
}
