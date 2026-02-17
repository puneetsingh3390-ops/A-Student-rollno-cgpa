#include <stdio.h>

// Declaration of data structure
typedef struct
{
    float real;
    float imag;
} Complex;

// Declaration of Operations
Complex input();
Complex Add(Complex, Complex);
Complex Sub(Complex, Complex);
Complex Mul(Complex, Complex);
void display(Complex);

int main()
{
    Complex num1, num2, num3;

    num1 = input();
    num2 = input();

    num3 = Add(num1, num2);
    printf("\nAddition Result:\n");
    display(num3);

    num3 = Sub(num1, num2);
    printf("\nSubtraction Result:\n");
    display(num3);

    num3 = Mul(num1, num2);
    printf("\nMultiplication Result:\n");
    display(num3);

    return 0;
}

// Implementation of Operation

Complex input()
{
    Complex temp;
    printf("Enter real part: ");
    scanf("%f", &temp.real);
    printf("Enter imaginary part: ");
    scanf("%f", &temp.imag);
    return temp;
}

Complex Add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex Sub(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex Mul(Complex a, Complex b)
{
    Complex result;

    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);

    return result;
}

void display(Complex c)
{
    printf("Result = %.2f + %.2fi\n", c.real, c.imag);
}
