#include <stdio.h>

void welcome_mes() {
    puts("/=============================/");
    puts(" Welcome To Mario's Calculator");
    puts("/=============================/\n");
}

void exit_app() {
    puts("/=============================/");
    puts("   You Have Exit The Program! ");
    puts("/=============================/\n");
}

void insert_com() {
    printf(">");
}

double enter_num() {
    printf("Enter the first number\n");
    insert_com();
    double first_num = 0;
    scanf("%lf", &first_num);
    return first_num;
}

double enter_second_num() {
    printf("Enter the second number\n");
    insert_com();
    double second_num = 0;
    scanf("%lf", &second_num);
    return second_num;
}

int check_even_ood() {
    printf("Enter a number to check if is Even or Odd\n");
    insert_com();
    int check_num_type = 0;
    scanf("%d", &check_num_type);
    if(check_num_type % 2 == 0)
        printf("%d is even.\n\n", check_num_type);
    else
        printf("%d is odd.\n\n", check_num_type);
    return check_num_type;
}

double menu_cal_set() {
    printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\n");
    insert_com();
    int menu_num = 0;

    scanf("%d", &menu_num);

    double first_number = enter_num();
    double second_number = enter_second_num();

    switch (menu_num) {
    case 1:
        printf("%.2lf + %.2lf = %.2lf\n\n", first_number, second_number, first_number + second_number);
        break;
    case 2:
        printf("%.2lf - %.2lf = %.2lf\n\n", first_number, second_number, first_number - second_number);
        break;
    case 3:
        printf("%.2lf * %.2lf = %.2lf\n\n", first_number, second_number, first_number * second_number);
        break;
    case 4:
        printf("%.2lf / %.2lf = %.2lf\n\n", first_number, second_number, first_number / second_number);
        break;
    default:
      printf("|ERROR| Choose a correct operator");

    }

    return menu_num;
}

int main() {
    int loop_app = 1;

    welcome_mes();

    while (loop_app > 0){
        printf("Press 1 for calculator\nPress 2 to check a number if is Even or Odd\nPress 3 to close the program\n");
        insert_com();
        int first_menu_num = 0;
        scanf("%d", &first_menu_num);
        if (first_menu_num == 1)
        {
            menu_cal_set();
        }
        else if (first_menu_num == 2)
        {
            check_even_ood();
        }
        else if (first_menu_num == 3)
        {
            int loop_app = 0;
            exit_app();
            return 0;
        }
    }

    return 0;
}
