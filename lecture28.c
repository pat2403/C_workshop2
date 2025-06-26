//ประเภทของอาเรย์ มี 4 ประเภท (แต่ใช้โดยทั่วไปอยู่ 2 ประเภท)
// one dimensional arrray (1 มิติ) ***
// เช่น int dataA[5]; คือ dataA มี่ 1 แถวจำนวน 5 ช่อง

// two dimensional arrray (2 มิติ) ***
// เช่น int dataB[3][5]; คือ dataB มี่ 3 แถวละ 5 ช่อง

// three dimensional arrray (3 มิติ)
// เช่น int dataC[2][3][5];

// multi dimensional arrray (หลาย มิติ) 

#include <stdio.h>

int main(){
    int dataA[3];
    int dataB[] = {11, 22, 33, 44};

    //two dimensional array
    int dataC[2][5];
    int dataD[][3] = {
        {1, 2, 3,},
        {11, 22, 33,},
        {111, 222, 333},
        {1111, 2222 , 3333}};

        dataA[2] = 999;
        dataD[1][2] = 5555;
}