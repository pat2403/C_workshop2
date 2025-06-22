//ประเภทที่ 2 คือ Function ที่มี parameter และไม่มี return value 
//Parameter คือ ตัวแปรประเภทหนึ่่ง จะเก็บ/รับข้อมูล
#include <stdio.h> 

void showline();

void funcSau(int a, int b, double c){
    double sum = a + b + c;
    printf("Sau of a b c is : %.2lf\n", sum);
}

void wowwowwow(char name[50], int age){
    printf("Your name is %s\n", name);
    printf("Your age is %d\n", age);
}

void main(){
    showline();
    funcSau( 10, 20, 10.25); //เวลา call Function ที่มี parameter ต้องส่งค่าเข้าไปด้วย
    showline();
    wowwowwow("Somjai", 20);
    wowwowwow("Somsee", 31);
    showline();
}

void showline(){
    printf("--------------------------\n");
}