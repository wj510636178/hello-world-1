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
				if(b==1) {
					printf("������������"); 
				}
			else printf("��������������");
			
			return 0;
			
	
	
}
