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
				if(b==1) {
					printf("这两个数互质"); 
				}
			else printf("这两个数不互质");
			
			return 0;
			
	
	
}
