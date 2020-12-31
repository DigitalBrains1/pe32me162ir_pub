#ifndef INCLUDED_BOGOARDUINO_H
#define INCLUDED_BOGOARDUINO_H

#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define F(x) x

const u_int8_t INPUT = 0;
const u_int8_t OUTPUT = 1;

void delay(unsigned long) {}
unsigned long millis() { static int m = 50000; return (m += 60000); }
void pinMode(u_int8_t pin, u_int8_t mode) {}

#endif //INCLUDED_BOGOARDUINO_H
