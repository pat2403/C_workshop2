//การแก้ปัญหาโจทย์โปรแกรมด้วย Function
//1. Dev. แต่ละคน สามารถเลือกใช้ประเภทฟังค์ชั้นในการแก้ไขปัญหาโจทย์หนึ่งๆ ได้แตกต่างกัน

//Ex. หาผลรวม ค่าสูงสุด ต่ำสุด และค่าเฉลี่ย ของตัวเลข 5 จำนวนที่ได้รับจากผู้ใช้ แล้วแสดงผลออกทางหน้าจอ

#include <stdio.h>

double n1, n2, n3, n4, n5; //Declare global
void inputNumber(){ variable

    printf("Input number 1 : "); scanf("%lf", &n1); 
    printf("Input number 2 : "); scanf("%lf", &n2); 
    printf("Input number 3 : "); scanf("%lf", &n3); 
    printf("Input number 4 : "); scanf("%lf", &n4); 
    printf("Input number 5 : "); scanf("%lf", &n5);
}

double sunNumber(){
    return n1 + n2 + n3 + n4 + n5;
}

double avgNumber(){
    return (n1 + n2 + n3 + n4 + n5) / 5;
}

double maxNumber(){
    double max = n1;
    if (n2 > max)
    {
        max = n2;
    }if (n3 > max)
    {
        max = n3;
    }if (n4 > max)
    {
        max = n4;
    }if (n5 > max)
    {
        max = n5;
    }
    return max;
}

double minNumber(){
    double min = n1;
    if (n2 < min)
    {
        min = n2;
    }if (n3 < min)
    {
        min = n3;
    }if (n4 < min)
    {
        min = n4;
    }if (n5 < min)
    {
        min = n5;
    }
    return min;
}

void showResult(){
    printf("Number is : %.2lf %.2lf %.2lf %.2lf %.2lf\n", n1, n2, n3, n4, n5);
    printf("Sum of number is : %.2lf\n", sunNumber());
    printf("Average is : %.2lf\n", avgNumber());
    printf("Max is : %.2lf\n", maxNumber());
    printf("Min is : %.2lf\n", minNumber());
}
       
void main(){
    inputNumber(); 
    showResult();
}