//ประยุกต์ใข้ Array แก้ไขปัญหาโจทย์โปรแกรม

//โปรแกรมหาค่าเฉลี่ยของ 50 จำนวนที่รับทางแป้นพิมพ์ แล้วแสดงผลออกมา
#include "stdio.h"

int main(){
    int n[5];
    int i;
    int sum = 0;
    double avg = 0;

    for(i = 0; i < 5; i = i + 1){
        printf("Input number %d : ", i);
        scanf("%d", &n[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        sum = sum + n[i];
    }
    
    avg = sum / 5.0;
    printf("-------------------------------------\n");
    printf("Average of number is : %.2lf\n", avg);

}