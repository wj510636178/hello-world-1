#include <stdio.h> 
int main()
{
	int a,b,m,n,t;
		printf("��������������\n");
			scanf("%d%d",&a,&b);
			t=a*b;
			while(a%b!=0){
				m=a%b;
				a=b;
				b=m;
						}
			n=t/b; 
			printf("��С������Ϊ%d",n);
			return 0;
			
	
	
}
