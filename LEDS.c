#include <stdio.h>

int main()
{
    float Vin;
    float LedAzulb;
    float ResledAzul;
    float VledAzul;
    float IledAzul;
    float VR;

    VledAzul= 3;
    IledAzul= 0.02;

    printf("ingrese el valor del coltaje de alimentacion\n");
    scanf ("%f",&Vin);
    printf("Voltaje de alimentacion= %f\n",Vin);

    VR= Vin-VledAzul;
    ResledAzul= VR/IledAzul;

    printf("Resistencia para el Led Azul brillante= %f\n",ResledAzul);

    return 0;
}
