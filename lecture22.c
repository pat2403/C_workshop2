//ประเภทของฟังค์ชั้น มี 4 ประเภท 
//ประเภทที่ 1 คือ Function ที่ไม่มี parameter และไม่มี return 
#include <stdio.h>

void showhey();

void showhello(){
    printf("Hello\n");
    //ไม่มีคำสั่ง return ในตัว Function และ return type ต้องเป็น void
}

void showhi(){
    printf("Hi\n");
    showhello();
}

void main(){
    showhello();
    showhello();
    showhi();
    
}

void showhey(){
    printf("Hey\n");
}