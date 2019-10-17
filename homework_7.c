//å®ç°ä»£ç åˆ¤æ–­2ä¸ªfloatå˜é‡ç›¸ç­‰
//è¯¯å·®ç²¾ç¡®åˆ°æ—¶å°æ•°ç‚¹å5ä½
#include <stdio.h>
#include<math.h>
int main()
{
    float m ;
    float x ; 
    printf("ÇëÊäÈëÁ½¸ö¸¡µãÊı\n"); 
    scanf("%f%f",&m,&x);
    if(fabs(m-x)<0.00001){
    	printf("ÕâÁ½¸ö¸¡µãÊıÏàµÈ\n");
	}else{
		printf("ÕâÁ½¸ö¸¡µãÊı²»ÏàµÈ"); 
	}
    return 0;
}
