/*
Autor: Rodrigo Zenteno
Descripción: Implementación de funciones para operar con números complejos
 */
#include <stdio.h>

typedef struct{
	int a;
	int b;
} Complex;

Complex newComplex(int real, int imaginary){
	Complex c;
	c.a = real;
	c.b = imaginary;
	return c;
}

Complex add(Complex p1, Complex p2){
	return newComplex( p1.a + p2.a ,p1.b + p2.b);
}

Complex mult(Complex p1, Complex p2){
	return newComplex( p1.a*p2.a - p1.b*p2.b ,p1.a*p2.b + p1.b*p2.a);
}

Complex negative(Complex p1){
	return newComplex( (-1) * p1.a, (-1) * p1.b);
}

int main(){
	Complex c, d, e, f;
	c = newComplex(2,3);
	d = newComplex(5,1);
	e = add(c,d);
	f = mult(c,d);
	printf("%d + %di\n", c.a, c.b);
	printf("%d + %di\n", d.a, d.b);
	printf("%d + %di\n", e.a, e.b);
	printf("%d + %di\n", f.a, f.b);
	return 0;
}