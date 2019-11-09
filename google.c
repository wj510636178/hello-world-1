//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
int main(){
	int i = 2,a[1000],j,count1=0,count2=1,m;
	int b = i,x = i;
	m = i;
	while(1){
		do{
			b = b/10;
			count1 = count1+1;
		}while(b!=0);
		for(j=0;j<count1;j++){
			m = x%10;
			x = x/10;
			if(m==1){
				count2 = count2+1;
			}
		}
		count1 = 0;
		if(count2==i){
				printf("%d\n",i);
				break;
			}
		i = i+1;
		b = i;
		x = i;
		m = i;
	}
	return 0;
} 
