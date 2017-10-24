# include <stdio.h>
int ond (float x);
int main() {
	float a;
	int b ;
	scanf("%f",a) ;
	b=ond(a);
	printf("%d",b);
	getchar();
	
	return 0;
	}
	int ond (float x){
		if(x>=0)
		return (int)(x+0.5);
		else return (int)(x-0.5);
		
	}
