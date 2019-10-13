#include <stdio.h> 
int main()
{
	int a,b,m;
		printf("请输入两个数字\n");
			scanf("%d%d",&a,&b);
			while(a%b!=0){
				m=a%b;
				a=b;
				b=m;
						}
			
			printf("最大公约数为%d",b);
			return 0;
			
	
	
}
