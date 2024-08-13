/*
Binary exponentiation is a method for efficiently computing large powers by breaking down the exponent into its binary representation.
It iterates through the binary digits of the exponent from right to left. When a binary digit is 1, you multiply the result by the base,
and in each step, you square the base. This reduces the number of multiplications required and speeds up exponentiation, especially for 
large exponents.
*/