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

laptop_factory input()
{
    laptop_factory lap;
    init(0, 0, 0, 0);
    printf("Enter model: \n");
    rewind(stdin); 
    gets_s(lap.model, LEN);
    printf("Enter RAM size : \n");
    scanf_s("%d", &lap.RAM_size);
    printf("Enter CPU frequency : \n");
    scanf_s("%d", &lap.CPU_frequency);
    printf("Enter RAM size : \n");
    scanf_s("%f", &lap.price);
    printf("Enter year : \n");
    scanf_s("%d", &lap.year);
    return lap;
}


int main()
{
	
}

