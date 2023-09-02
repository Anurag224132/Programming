#include <stdio.h>
struct myStructure {
  int Num;
  char Letter;
};

int main() {
  
  struct myStructure s1;


  s1.Num = 13;
  s1.Letter = 'B'; 

  
  printf("My number: %d\n", s1.Num);
  printf("My letter: %c\n", s1.Letter);

  return 0;
}
