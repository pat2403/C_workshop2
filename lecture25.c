//ประเภทที่ 4 คือ Function ที่มี parameter และมี return value (Have parameter and has return value)

#include <stdio.h>
double multiplyNumber(double n1, double n2);
double divideNumber(double n1, double n2);

double addNumber(double n1, double n2){
    double value = n1 + n2;
    return value;
}

double subNumber(double n1, double n2){
    double value = n1 - n2;
    return value;
}

void main(){   
    printf("10 + 555 = %.2lf\n", addNumber(10, 555));
    printf("100 + 500 = %.2lf\n", addNumber(100, 500));
    printf("20 - 5 = %.2lf\n", subNumber(20, 5));
}

double multiplyNumber(double n1, double n2){
    double value = n1 * n2;
    return value;
}

double divideNumber(double n1, double n2){
    double value = n1 / n2;
    return value;
}