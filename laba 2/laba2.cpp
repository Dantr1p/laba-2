#include <stdio.h>
#include<malloc.h>
#include<string.h>
#define LEN 25
#define STD ""
typedef struct {

	char model[LEN];	
	int RAM_size;
	int CPU_frequency;
	double price;
	int year;
} laptop_factory;


laptop_factory init(int ram, int freq, double pr, int year)
{
    laptop_factory check;
    strcpy_s(check.model, STD);
    check.RAM_size = ram;
    check.CPU_frequency = freq;
    check.price = pr;     
    check.year = year;
    return check;
}




int main()
{
	
}

