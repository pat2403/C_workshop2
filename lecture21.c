//Function (User-defined Function) ฟังค์ชั้นที่ Dev. สร้างขึ้นมาเอง

#include <stdio.h>
void funcB( ); //Declare Function
void funcC( );

void funcA( ){
    printf("AAAAA\n");
}

void main(){            //main function
    funcA( ); //callfunction
    funcB( );
    funcC( );

}

void funcB( ){
    printf("BBBBB\n");
}

void funcC( ){
    printf("CCCCC\n");
}