#include <stdio.h>
#define pi 3.1415 

// mech efficiency = (bp/ip) * 100;

float IP(int i, float pm, float l, float a, float n, float k)
{

    return ((i * pm * l * a * n * k * 10.0) / 6.0);
}

int main(int argc, char const *argv[])
{
    // Indicated Power

    int i;
    float pm, l, a, n, k, st;
    float eff, bp, t;

    printf("Enter Number of Cylinders in the Engine: ");
    scanf("%d", &i);

    printf("Enter Mean Effective Pressure: ")
    scanf("%f", &pm);

    printf("Enter length of the Stroke (in meter): ");
    scanf("%f", &l);

    printf("Enter Cross section Area of the Engine Cylinder (in meter sqaure): ");
    scanf("%f", &a);

    printf("Enter Crank Shaft Speed (in RPM): ");
    scanf("%f", &n);

    printf("Enter 2 for a 2-Stroke Engine and 4 for a 4-Stroke Engine: ");
    scanf("%f", &st);

    if (st == 4)
        k = 0.5;

    else if (st == 2)
        k = 1;

    printf("Enter the Torque Applied (in N.m): ");
    scanf("%f", &t);

    float ip = IP(i, pm, l, a, n, k);

    printf("The Indicated Power of the Engine is %f kW\n", ip);

    //Brake Power

    bp = (2 * pi * n * t) / 60000;

    eff = bp * 100 / ip;

    printf("Brake Power of the Engine is %f kW\n", bp);

    printf("Fractional Power of the Engine is %f kW\n", (ip - bp));

    printf("The Efficiency of Engine is %f\n", eff);

    return 0;
}