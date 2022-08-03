#include<stdio.h>

int main() {

  float num_1, num_2;

  int operator, repeat;

  do {
    printf("\nEnter a number: ");
    scanf("%f", &num_1);

    printf("\nEnter another number: ");
    scanf("%f", &num_2);

    int valid_operator = 1;

    do {
      printf("\nSelect operator:\n 1. Multiplication\t 2. Division\t 3. Addition \t 4. Subtraction\n\nSelect Option: ");
      scanf("%i", &operator);

      
      
      switch(operator) {
        case 1:
          printf("\n----------------------\n");
          printf("\nResult: %.2f\n", num_1 * num_2);
          printf("\n----------------------\n");
          valid_operator = 1;
          break;
        case 2:
          printf("\n----------------------\n");
          printf("\nResult: %.2f\n", num_1 / num_2);
          printf("\n----------------------\n");
          valid_operator = 1;
          break;
        case 3:
          printf("\n----------------------\n");
          printf("\nResult: %.2f\n", num_1 + num_2);
          printf("\n----------------------\n");
          valid_operator = 1;
          break;
        case 4:
          printf("\n----------------------\n");
          printf("\nResult: %.2f\n", num_1 - num_2);
          printf("\n----------------------\n");
          valid_operator = 1;
          break;
        default :
          printf("\nINVALID OPERATOR SELECTED!\n");
          valid_operator = 0;
          break;
      }
      
    } while (valid_operator == 0);

    printf("\n\nWould you like to make another calculation?\n1. Yes\t 2. No\n\nSelect Option: ");
    int option;
    scanf("%i", &option);

    if(option == 1) {
      repeat = 1;
    }
    else {
      repeat = 0;
      printf("\nGood bye! :)\n");
    }

  } while (repeat == 1);

  return 0;
}