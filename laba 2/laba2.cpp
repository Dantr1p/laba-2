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
    printf("Enter price : \n");
    scanf_s("%lf", &lap.price);
    printf("Enter year : \n");
    scanf_s("%d", &lap.year);
    return lap;
}

void output(laptop_factory check)
{
    printf("Model laptop: %s\n", check.model);
    printf("RAM size laptop: %d\n", check.RAM_size);
    printf("CPU frequency laptop: %d\n", check.CPU_frequency);
    printf("Price laptop: %lf\n", check.price);
    printf("Release year laptop: %d\n", check.year);
}

void add_price(laptop_factory m1, laptop_factory m2)
{
    double sum;
    sum = m1.price + m2.price;
    printf("Total price of laptop: %lf", sum);
}

int main()
{
	
}

