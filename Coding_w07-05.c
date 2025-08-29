#include <stdio.h>              

int main() { 
    int age;                                                                                            // ประกาศตัวแปร age เป็นจำนวนเต็ม
    int VIP_level;                                                                                      // ประกาศตัวแปร VIP_level เป็นจำนวนเต็ม
    float purchase_amount;                                                                              // ประกาศตัวแปร purchase_amount เป็นจำนวนทศนิยม

    printf("Enter age: ");                                                                              // รับค่าอายุ
    scanf("%d", &age);                                                                                  // เก็บค่าที่รับมาในตัวแปร age
    printf("Enter your VIP level (1-5): ");                                                             // รับค่าระดับ VIP
    scanf("%d", &VIP_level);                                                                            //เก็บค่าที่รับมาในตัวแปร VIP_level
    printf("Enter your purchase amount: \n");                                                           // รับค่าจำนวนเงินที่ใช้ซื้อสินค้า
    scanf("%f", &purchase_amount);                                                                      // เก็บค่าที่รับมาในตัวแปร purchase_amount

    printf("--- Customer Info ---\n");                                                                  // แสดงหัวข้อ Customer Info
    printf("Age: %d | VIP level: %d | Amount: %.2f\n", age, VIP_level, purchase_amount);                // แสดงผลข้อมูลลูกค้า

    if ((age >= 60) || ((VIP_level == 3) || (VIP_level == 4))) {                                        // ถ้าอายุ 60 ปีขึ้นไป หรือ ระดับ VIP เป็น 3 หรือ 4
        printf("Discount received: 20%%!\n");                                                           // แสดงผล Discount received: 20%!
    } 
    else if (((age >= 30) && (age <= 40)) && (purchase_amount > 2000)) {                                // ถ้าอายุระหว่าง 30-40 ปี และ จำนวนเงินที่ใช้ซื้อสินค้ามากกว่า 2000
        printf("Discount received: 15%%!\n");                                                           // แสดงผล Discount received: 15%!
    } 
    else if (((age >= 18) && (age <= 25)) && (purchase_amount > 1000)) {                                // ถ้าอายุระหว่าง 18-25 ปี และ จำนวนเงินที่ใช้ซื้อสินค้ามากกว่า 1000
        printf("Discount received: 10%%!\n");                                                           // แสดงผล Discount received: 10%!
    } 
    else if ((VIP_level == 5) || (purchase_amount > 50000)) {                                           // ถ้าระดับ VIP เป็น 5 หรือ จำนวนเงินที่ใช้ซื้อสินค้ามากกว่า 50000
        printf("Discount received: 25%%!\n");                                                           // แสดงผล Discount received: 25%!
    } 
    else {
        printf("No Discount applied.\n");                                                               // แสดงผล No Discount applied.
    } 

    printf("Thank you for shopping with us!\n");                                                        // แสดงผล Thank you for shopping with us!
    
    return 0;
}