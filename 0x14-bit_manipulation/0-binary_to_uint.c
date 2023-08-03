#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary: String containing the binary number.
 *
 * Return: The converted number as an unsigned int, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *binary)
{
    if (!binary)
        return 0;

    unsigned int decimal_value = 0;

    for (int i = 0; binary[i]; i++)
    {
        if (binary[i] < '0' || binary[i] > '1')
            return 0;

        decimal_value = (decimal_value * 2) + (binary[i] - '0');
    }

    return decimal_value;
}
