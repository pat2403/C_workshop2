#include <stdio.h>

void main(){
    //ตัวแปรปกติ
    float data01;
    //ตัวแปรพอยเตอร์ (เก็บ address ของตัวแปรปกติ หรือ ตัวแปรอาร์เรย์)
    float *data03; 

    data01 = 999;
    data03 = &data01;
    
    printf("Address of data01 : %p\n", (void*)&data01);
    printf("Value in data03 : %p\n", data03);
    printf("----------------------------------\n");
    printf("%f\n", data01);
    printf("%f\n", *data03);// ใข้ * เพื่อเข้าถึงค่าที่อยู่ใน address นั้นๆ ที่ชี้ไป
    printf("----------------------------------\n");
    *data03 = 555;
    printf("%f\n", data01);
    printf("%f\n", *data03);
    
}