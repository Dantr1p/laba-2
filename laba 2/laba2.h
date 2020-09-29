#pragma once
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
#include "malloc.h"

struct Laptop {
	int size;
	int model;
	double price;
	int frequency;
	struct Data {
		int day;
		int mounth;
		int year;
	};
};



struct Laptop* init(int size, int model, double price, int frequency, int day, int mounth, int year);
int read();
int display();
int add();