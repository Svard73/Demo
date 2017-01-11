#include <stdio.h>
#include <stdlib.h>

int main()
{
	 printf("Please Enter a Number between 1 and 10 (1-10): ");
 scanf("%d", &value);

while ( value < 1 || value > 10)
  {

    printf("Incorrect input, please try again.\n");
    printf("Enter a Number between 1 and 10 (1-10): ");
    scanf("%d", &value);
    printf("Hello world!\n");
    return 0;
}
