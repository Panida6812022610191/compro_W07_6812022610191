#include <stdio.h>
int main() {
    int Level ; // ประกาศตัวแปร Level เป็นจำนวนเต็ม
    printf("Enter membership level(1-4): "); //  level
    scanf("%d", &Level); // เก็บค่าที่รับมาในตัวแปร Level       
    switch (Level) {
        case 1: // ถ้า levelเท่ากับ 1
            printf("Silver Member :You get 5%% discount\n"); // แสดงผล Silver Member :You get 5% discount 
            break; // ออกจากเงื่อนไข                            
        case 2: // ถ้า levelเท่ากับ 2
            printf("Gold Member :You get 10%% discount+Reward points\n"); // แสดงผล Gold Member :You get 10% discount+Reward points 
            break; // ออกจากเงื่อนไข 
        case 3: // ถ้า levelเท่ากับ 3
            printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n"); // แสดงผล Platinum Member :You get 15% discount + Reward points + Birthday gift
            break; // ออกจากเงื่อนไข
        case 4: // ถ้า levelเท่ากับ 4
            printf("Diamond Member : You get all prerogative + VIP events\n"); // แสดงผล Diamond Member : You get all prerogative + VIP events
            break; // ออกจากเงื่อนไข                                               
        default: // ถ้า levelไม่เท่ากับ 1,2,3,4  หรือค่าอื่นๆ             
         printf("Invalid membership level\n"); // แสดงผล Invalid membership level
    }

    return 0;
}
// การใช้ switch case
//โปรแกรมรับ level (1-4) แล้วแสดงสิทธิพิเศษ
// 1 silver:ส่วนลด 5%
// 2 gold:ส่วนลด 10% + คะแนนสะสม
// 3 platinum:ส่วนลด 15% + คะแนนสะสม + ของขวัญวันเกิด
// 4 diamond:สิทธิพิเศษทั้งหมด + งาน vip ถ้าไม่ใช่ 1-4 แจ้งว่าไม่ถูกต้อง
// ถ้าใช้ if else จะเหมือน coding_w07-04-01.c
// ถ้าใช้ switch case จะเหมือน coding_w07-04.2.c
// switch case จะเหมาะกับการตรวจสอบเงื่อนไขที่มีค่าแน่นอน เช่น 1,2,3,4
// if else จะเหมาะกับการตรวจสอบเงื่อนไขที่มีค่าหลากหลาย เช่น มากกว่า น้อยกว่า เท่ากับ
// switch case จะทำงานได้เร็วกว่า if else ในกรณีที่มีเงื่อนไขมากๆ
// switch case จะอ่านง่ายกว่า if else ในกรณีที่มีเงื่อนไขมากๆ
// switch case ไม่สามารถใช้กับเงื่อนไขที่เป็นช่วงตัวเลขได้ เช่น if (x > 0 && x < 10)
// switch case ไม่สามารถใช้กับเงื่อนไขที่เป็นตัวแปรชนิด float หรือ double ได้
// switch case ไม่สามารถใช้กับเงื่อนไขที่เป็นตัวแปรชนิด string ได้
// switch case จะต้องมีคำสั่ง break เพื่อออกจากเงื่อนไขในแต่ละ case ถ้าไม่มีจะทำให้โปรแกรมทำงานต่อไปยัง case ถัดไปจนกว่าจะเจอคำสั่ง break หรือจบ switch case
// switch case สามารถมีคำสั่ง default เพื่อจัดการกรณีที่ไม่ตรงกับเงื่อนไขใดๆ ได้
// สรุป switch case เหมาะกับการตรวจสอบเงื่อนไขที่มีค่าแน่นอนและไม่ซับซ้อน ในขณะที่ if else เหมาะกับการตรวจสอบเงื่อนไขที่มีค่าหลากหลายและซับซ้อน