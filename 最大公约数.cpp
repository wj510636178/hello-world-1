#include <stdio.h> 
int main()
{
	int a,b,m;
		printf("��������������\n");
			scanf("%d%d",&a,&b);
			while(a%b!=0){
				m=a%b;
				a=b;
				b=m;
						}
			
			printf("���Լ��Ϊ%d",b);
			return 0;
			
	
	
}
