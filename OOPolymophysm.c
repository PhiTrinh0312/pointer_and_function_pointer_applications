
#include<stdio.h>

typedef void (*BarkFn)();
typedef struct Dog{
	BarkFn bark;
}Dog;

void ChihuahuaBark(){
	printf("ang ang \n");
}

void HuskyBark(){
	printf("Gau gau \n");
}


int main(){
 Dog cho1={ChihuahuaBark};
 Dog cho2={HuskyBark};
 
 cho1.bark();
 cho2.bark();
 
 return 0;

}
