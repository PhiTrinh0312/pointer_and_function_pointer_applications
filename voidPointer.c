#include<stdio.h>
void printValue(void *data, int dataType) {
    if (dataType == 1) {
        int intValue = *((int *)data);
        printf("Gia tri là: %d\n", intValue);
    } else if (dataType == 2) {
        float floatValue = *((float *)data);
        printf("Gia tri là: %f\n", floatValue);
    }
}
int main(){
    float x;
    int y;
    void *p;
    p = &x;
    *((float*)p) = 2.5; // 
    printf("%f \n", x);   // 
//    printf("%f",*p);  error
    printf("*p: %f\n", *((float*)p));
    
     int intValue = 42;
    float floatValue = 3.14;
    printValue(&intValue, 1);   // In giá tr? ki?u int
    printValue(&floatValue, 2); // In giá tr? ki?u float
///////////////////////////////////////
//ung dung : truyen du lieu dong qua ham 
    return 0;
}
