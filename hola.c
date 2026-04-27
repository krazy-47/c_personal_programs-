#include <stdio.h>
#include <math.h>

int main() {
   double radius;
   double area;
   double perimiter;
   double Volume;
   const double PI = 3.1415926535897932384626433832795028841;



 printf("enter the radius in cm : ");
 scanf("%lf", &radius);
 area = PI * pow(radius, 2);
 perimiter = 2 * PI * radius;
 Volume = (4.0 / 3.0) * PI * pow(radius, 3);
 printf("this is the area %.5lf cm2\n", area );
 printf("the perimeter is %.5lf cm\n", perimiter);
printf("this is the volume %.5lf cm3\n", Volume);
   return 0;
}  