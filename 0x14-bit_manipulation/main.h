#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
unsigned int binary_to_uint(const char *a);
void print_binary(unsigned long int a);
int get_bit(unsigned long int a, unsigned int index);
int set_bit(unsigned long int *a, unsigned int index);
int clear_bit(unsigned long int *a, unsigned int index);
unsigned int flip_bits(unsigned long int a, unsigned long int b);
int get_endianness(void);
#endif
