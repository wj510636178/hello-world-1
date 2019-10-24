//交换排序
#include <stdio.h>
int main() {
  int x[3] = {5, 2, 1}, i,t;
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(i=0;i<2;i++) {
      if( x[i] > x[i+1]) {
      	t=x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = t;
      }
      if(x[0]>x[2]){
      	t= x[2];
      	x[2]= x[0];
      	x[0]= t;
	  } 
    }
    printf(" %d, %d, %d", x[0], x[1], x[2]);
  return 0;
}
