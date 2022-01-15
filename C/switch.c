#include <stdio.h>

enum color {
  red,
  blue,
  black,
  white,
};

int main(void){
  enum color color;
  color = black;

  switch(color){
    case red:
      printf("赤");
      break;
    case blue:
      printf("青");
      break;
    case black:
    case white:
      printf("パンダの色");
      // break;
    default:
      printf("他の色");
  }

  return 0;
}

// パンダの色