//Array คือ แถวลำดับ เป็นโครงสร้างข้อมูล
//แถวลำดับ ในที่นี้เปรียบเสมือนมีช่องหลายๆช่อง เรียงชิดติดกัน

//เราจะใช้อาเรย์กับการเขียนโปรแกรมในเรื่องของตัวแปร ก็จำเกิดสิ่งที่เรียกว่า ตัวแปรอาร์เรย์
#include <stdio.h>

void main(){
    //ตัวแปรปกติ
    int dataA;
    double dataB = 30;
    
    //ตัวแปรอาร์เรย์ (1 ตัว มีช่องหลายช่อง เก็บได้หลายข้อมูล)
    int dataC[5];
    double dataD[] = {10, 20, 30, 40, 50};

    dataA = 111;
    dataB = 222;

    printf("Data A : %d\n", dataA);
    printf("Data B : %lf\n", dataB);
    printf("-----------------------------\n");
    dataC[2] = 100 ;
    dataC[0] = 500 ;
    printf("Data C [2] is : %d\n", dataC[2]);
    printf("Data D [5] is : %lf\n", dataD[4]);
}