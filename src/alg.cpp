// Copyright 2022 Degtyarev Paul
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
double a = 1.0;
for(n; n > 0; n--) {
a = a * value;
}
return a;
}

uint64_t fact(uint16_t n) {
if(n == 0)
return 1;
else
return fact(n - 1) * n;
}

double calcItem(double x, uint16_t n) {
return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
double a = 0.0;
for (uint16_t i = 0; i <= count; i++) {
a += calcItem(x, i);
}
return a;
}

double sinn(double x, uint16_t count) {
double a = 0.0;
for (uint16_t i=1; i <= count; i++) {
a += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
}
return a;
}

double cosn(double x, uint16_t count) {
double a = 0.0;
for (uint16_t i = 1; i < count; i++) {
a += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
}
return a;
}
