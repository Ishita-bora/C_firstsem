#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex read_complex()
{
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void write_complex(struct Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex add_complex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex subtract_complex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main()
{
    struct Complex num1, num2, sum, diff;

    printf("Reading First Complex Number:\n");
    num1 = read_complex();

    printf("Reading Second Complex Number:\n");
    num2 = read_complex();

    printf("\nFirst Number: ");
    write_complex(num1);

    printf("Second Number: ");
    write_complex(num2);

    sum = add_complex(num1, num2);
    printf("\nSum: ");
    write_complex(sum);

    diff = subtract_complex(num1, num2);
    printf("Difference: ");
    write_complex(diff);

    return 0;
}