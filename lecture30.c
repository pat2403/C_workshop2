//Pointer ตัวชี้ ใข้กับการเขียนโปรแกรมในเรื่องของตัวแปร
//จึงเกิดตัวแปรที่เรียกว่า ตัวแปรพอยเตอร์ (Pointer Variable)
//ตัวแปรปกติทั่วไป หรือตัวแปรอาร์เรย์ เก็บข้อมูลอะไรก็ได้ เช่น ตัวเลข ตัวอักษร และอื่นๆ
//ตัวแปรพอยเตอร์ ใช้เก็บที่อยู่ (address) ของตัวแปรปกติทั่วไป หรือของตัวแปรอาร์เรย์ 

#include <stdio.h>

int main(){
    int var1 = 20;
    double var2 = 55.99;
    char var3 = '@';

    //แสดงหมายเลขที่อยู่ (address number) ของตัวแปi
    printf("Address of var1 is : %p\n", (void*)&var1);
    printf("Address of var2 is : %p\n", (void*)&var2);
    printf("Address of var3 is : %p\n", (void*)&var3);
    printf("----------------------------------\n");
    printf("Address of var1 is : %lld\n", (void*)&var1);
    printf("Address of var2 is : %lld\n", (void*)&var2);
    printf("Address of var3 is : %lld\n", (void*)&var3);
}
