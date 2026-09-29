#include<stdio.h>
#include<math.h>
int main(){
    //CIRCLE CALCULATOR CODE

    double radius=0.0;
    double area=0.0;
    double surfacearea=0.0;
    double volume=0.0;
    const double pi=3.14;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    area=pi*pow(radius,2);
    surfacearea=4*pi*pow(radius,2);
    volume=(4.0/3.0)*pi*pow(radius,3);

    printf("The area of the circle is: %lf\n",area);
    printf("The surface area of the circle is: %lf\n",surfacearea);
    printf("The volume of the circle is: %lf\n",volume);
    return 0;
}