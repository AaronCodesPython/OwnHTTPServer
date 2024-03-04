#include <stdio.h>

void printAge(int age){
   printf("You are %d years old\n", age);
   printf("Your age is stored at: %p\n", &age);
}
int main() {
   // printf() displays the string inside quotation
   int age = 21;
   int *pAge = &age; 
   //printf("address of age: %p \n", &age);
   //printf("address in pAge: %p \n", &age);
   //printf("value of age: %d", age);
   //printf("value at pAge:%d", *pAge);
   printf("passing value at address %p to function\n", pAge);
   printAge(age);
   return 0;
}