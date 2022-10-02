#include <stdio.h>
int main(){
    float celsius;
     printf("input celsius\n");
     scanf("%f",&celsius);
     float far;
     far = (celsius * 9/5) +32;
    printf("the value of celsius temp in fahrenheit is %f",far);

return 0;
}