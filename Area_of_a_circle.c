#include <stdio.h>

int main() {
   float pie = 3.14;
   int radius;
   scanf("%d",&radius);
   float area = (float)(pie* radius * radius);
   printf("%.2f", area);
   return 0;
}