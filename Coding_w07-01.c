#include <stdio.h>

int main(){
    float score;                                             // ประกาศตัวแปร score
    printf("Enter your score: ");                            // แสดงข้อความ Enter your score: รับค่าคะแนน
    scanf("%f", &score);                                     // เก็บค่าคะแนนที่รับมาในตัวแปร score  เป็นทศนิยม

    if(score >= 50){                                         // ถ้าคะแนนมากกว่าหรือเท่ากับ 50
         printf("Pass\n");                                   // ให้แสดงผล Pass
        score =score+(score*(5.0/100));                      // เพิ่มคะแนน 5% ของคะแนนที่มีอยู่
        printf("Your final score is %.2f\n", score);         // แสดงผลคะแนนสุดท้ายที่ได้หลังจาก +5%
    }
   
     else {                                                  // ถ้าคะแนนน้อยกว่า 50 
        printf("Your final score is %.2f\n", score);         // แสดงผลคะแนนที่ได้จากการรับมา
    }
return 0;
}
