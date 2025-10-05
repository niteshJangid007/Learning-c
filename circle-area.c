#include<stdio.h>
#include<math.h>
//math.h is a hader  file .
// if you want  to use power then you have to add this.

int main(){

    float pi=3.14,radius;
        printf("entre radius of circle : ");
            scanf("%f", &radius);
                 int power = pow(radius,2);
    printf("area of circle is : %f", pi*power);
      return 0;
}