#include<stdio.h>  
  
int main()  
{  
    const float PI = 3.14159265359;  
          float r, h, volume;  
  
    printf("Enter Radius and Height of the Cylinder\n");  
    scanf("%f%f", &r, &h);  
  
    volume = PI * r * r * h;  
  
    printf("Volume of Cylinder is %f\n", volume);  
  
    return 0;  
}  