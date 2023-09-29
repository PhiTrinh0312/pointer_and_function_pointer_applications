
#include<stdio.h>
void hello(char *str)
{
	printf("%s",str);
}

void welcome(void (*fn)(char *)){
	printf("Welcome : ");
	fn("MEO MEO ");
}

int main(){
	welcome(hello);
	return 0;
}
