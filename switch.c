#include <stdio.h>

enum color {
  red,
  blue,
};

int main(void){
  enum color color;
  color = red;

  switch(color){
    case red:
      printf("赤");
      break;
    case blue:
      printf("青");
      break;
    default:
      printf("他の色");
  }

  return 0;
}