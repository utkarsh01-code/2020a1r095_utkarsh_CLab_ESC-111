
#include <stdio.h>

int main()
{
  float pie,radius,lengtha,lengthb,breadth,areacircle,areasq,arearect,perimetercircle,perimetersq,perimeterrect;
  printf("radius of circle:\n");
  scanf("%f",&radius);
  printf("length of square and rectangle:\n");
  scanf("%f%f",&lengtha,&lengthb);
  printf("breadth of rectangle:\n");
  scanf("%f",&breadth);
  pie=3.14;
  areacircle=pie*radius*radius;
  perimetercircle=2*pie*radius;
  areasq=lengtha*lengtha;
  perimetersq=4*lengtha;
  arearect=lengthb*breadth;
  perimeterrect=2*(lengthb + breadth);
  printf("%f\n%f\n%f\n%f\n%f\n%f\n",areacircle,perimetercircle,areasq,perimetersq,arearect,perimeterrect);
  return 0;
}
