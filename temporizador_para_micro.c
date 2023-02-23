#include<stdio.h>
#include<reg51.h>

int inicio, h, m, s;
void delayMS(unsigned int);

main(){
	
	TCON = 0x01;
	IE = 0x81;
	s = 0;
	m = 0;
	h = 0;
	inicio = 0;
	
	while(1){
		
		if(inicio == 1){
			
			//while(1){
			
			printf("%d:%d:%d", h,m,s);
			delayMS(1400);
			s++;
			if(s == 60){
				m++;
				s=0;
			}
			if(m == 60){
				h++;
				m=0;
			}
			//printf("%d:%d:%d", h,m,s);
			//delayMS(1000);
			// }
    	}
    	else{
			s=0;
			m=0;
			h=0;
			printf("%d:%d:%d", h,m,s);
			delayMS(1400);
		}
	
}
	
	system("pause");
	return 0;
}