//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include <stdio.h>
int main(){
	int m,i,j,k,a,b;
	int sum1=0,sum2=0,sum3=0,count=0,average;
	for(m=100;m<10000;m++){
		b = m;
		while(b!=0){
			a = b%10;
			b = b/10;
			sum1 = sum1+a;
			sum2 = sum2+a*a;
		}
		for(i=2;i<=m;i++){
			if(m%i==0){
				break;
			}
		}
		if(i==m){
			for(j=2;j<=sum1;j++){
				if(sum1%j==0){
					break;
				}
			}
			if(j==sum1){
				for(k=2;k<=sum2;k++){
					if(sum2%k==0){
						break;
					}
				}
				if(k==sum2){
					printf("%d\n",m);
					sum3 = sum3+m;
					count = count+1;
				}
			}
		}
		a = 0;
		b = 0;
		sum1 = 0;
		sum2 = 0;
	}
	average = sum3/count;
	printf("%d\n",average);
	return 0;
}
