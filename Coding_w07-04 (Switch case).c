//กรณีใช้ Switch case
#include <stdio.h>

int main() {
int level;

printf("Enter membership level (1-4): ");
scanf("%d", &level);

switch (level) {
case 1:
printf("Silver Member: 5%% discount\n");
break;
case 2:
printf("Gold Member: 10%% discount + Reward points\n");
break;
case 3:
printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
break;
case 4:
printf("Diamond Member: All benefits + VIP events\n");
break;
default:
printf("Invalid membership level\n");
}

return 0;
}
