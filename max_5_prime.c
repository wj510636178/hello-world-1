//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include <stdio.h>
#include <math.h>
int n=0;
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
 }
 void perm(int list[], int k, int m,int sum[])
 {
      int i,pro[99999],t;
      if(k==m)
      {
		sum[n]=0;
            for(i=0;i<=m;i++){
            	sum[n]=sum[n]+list[i]*pow(10,i);
            }
			n=n+1;
      }
      else
      {
          for(i=k;i<=m;i++)
          {
            swap(&list[k],&list[i]);
            perm(list, k+1, m,sum);
            swap(&list[k], &list[i]);
          }
      }
 }       
 int main(void)
 {
     int list[]={0,0,0,0,0},s,t,sum[999],i,j,p=0,r;
     for(s=0;s<5;s++){
     	scanf("%d",&list[s]);					
	 }
     perm(list,0,4,sum);
     for(j=0;j<120;j++){
     	for(i=0;i<120-j-1;i++){
     		if(sum[i]<sum[i+1]){
     			int temp=sum[i+1];
     			sum[i+1]=sum[i];
     			sum[i]=temp;
			 } 
		 }
	 }
	for(i=0;i<120;i=i+1){
		r=pow(sum[i],0.5);
		for(j=2;j*j<=sum[i];j=j+1){
			if(sum[i]%j==0){
				break;
			}
				if(j==r && sum[i]/10000!=0){
					printf("%d",sum[i]);
					goto qqq;
				}
		    if(i==119){
		    	printf("ERROR");
			}
		}
	}
	qqq :
     return 0;
 }
