#include <stdio.h>

int main() {
    int x , y;                                                    // ประกาศตัวแปร x , y เป็นจำนวนเต็ม
    printf("Enter numbers(Ex :9): ");                             // รับค่าตัวเลข
    scanf("%d", &x);                                              // เก็บค่าที่รับมาในตัวแปร x
    printf("Enter numbers(Ex :8): ");                             // รับค่าตัวเลข
    scanf("%d", &y);                                              // เก็บค่าที่รับมาในตัวแปร y

    if (x > y) {
        printf("X is greater than Y\n");
    }                                                             //แสดงผล X > Y
    else if (x < y) {
        printf("X is less than Y\n");
    }                                                             //แสดงผล X < Y
    else {
        printf("X is equal to Y\n");
    }                                                             //แสดงผลในกรณีอื่นๆ  X = Y

    return 0;
}
