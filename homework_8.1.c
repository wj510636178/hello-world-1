//浜ゆ崲鎺掑簭
#include <stdio.h>
int main() {
  int m,j,k;
  printf("请输入要排序数字的个数"); 
  scanf("%d",&m);
  int x[m],i,t;
  for(j=0;j<m;j++){
  	scanf("%d",&x[j]);
  }
    for(i=0;i<m;i++) {
      if( x[i] > x[i+1]) {
  	    t = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = t;
      }
      if(x[0]>x[m-1]){
      	t=x[m-1];
      	x[m-1]=x[0];
      	x[0]=t;
	  }
  }
  for(k=0;k<m;k++){
  	printf("%d",x[k]);
  }
  return 0;
}
