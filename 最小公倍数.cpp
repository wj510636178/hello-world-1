#include <stdio.h> 
int main()
{
	int a,b,m,n,t;
		printf("请输入两个数字\n");
			scanf("%d%d",&a,&b);
			t=a*b;
			while(a%b!=0){
				m=a%b;
				a=b;
				b=m;
						}
			n=t/b; 
			printf("最小公倍数为%d",n);
			return 0;
			
	
	
}
