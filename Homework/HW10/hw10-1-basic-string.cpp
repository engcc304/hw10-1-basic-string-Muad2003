/*
    จงเขียนโปรแกรมเพื่อรับค่า String ที่สามารถรับชื่อและนามสกุลไว้ในตัวแปรเดียวกันได้ พร้อมกับแสดงผลบนหน้าจอคอมพิวเตอร์

    Test case:
        Kittinan Noimanee
    Output:
        Name: Kittinan Noimanee

    Test case:
        Visual Studio Code
    Output:
        Name: Visual Studio Code

*/

#include <stdio.h>

int main() {
    char name [ 100 ] ;
    fgets ( name,sizeof ( name ) ,stdin ) ;
    printf ("Name: %s\n", name);

    return 0 ;
} // end main