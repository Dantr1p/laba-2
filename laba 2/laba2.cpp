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

void compare_laptop(laptop_factory m1, laptop_factory m2)
{
    int ram, cpu, year;
    double price;
    printf("Compare laptop: %s and laptop: &s\n", m1.model, m2.model);

    // сравниваем по ram
    if (m1.RAM_size > m2.RAM_size)
    {
        ram = m1.RAM_size - m2.RAM_size;
        printf("The RAM of the laptop %s is more on the RAM of the laptop %s by %d gb\n", m1.model, m2.model, ram);
    }
    if (m1.RAM_size < m2.RAM_size)
    {
        ram = m2.RAM_size - m1.RAM_size;
        printf("The RAM of the laptop %s is more on the RAM of the laptop %s by %d gb\n", m2.model, m1.model, ram);
    }
    if (m1.RAM_size = m2.RAM_size)
    {
        printf("Laptops have the same RAM\n");
    }    
    // сравниваем по частоте
    if (m1.CPU_frequency > m2.CPU_frequency)
    {
        cpu = m1.CPU_frequency - m2.CPU_frequency;
        printf("The CPU frequency of the laptop %s is more on the CPU frequency of the laptop %s by %d \n", m1.model, m2.model, cpu);
    }
    if (m1.CPU_frequency < m2.CPU_frequency)
    {
        ram = m2.CPU_frequency - m1.CPU_frequency;
        printf("The CPU frequency of the laptop %s is more on the CPU frequency of the laptop %s by %d \n", m2.model, m1.model, cpu);
    }
    if (m1.CPU_frequency = m2.CPU_frequency)
    {
        printf("Laptops have the same CPU frequency\n");
    }
    // сравниваем по цене
    if (m1.price > m2.price)
    {
        price = m1.price - m2.price;
        printf("The price of the laptop %s is more on the price of the laptop %s by %d \n", m1.model, m2.model, price);
    }
    if (m1.price < m2.price)
    {
        ram = m2.price - m1.price;
        printf("The price of the laptop %s is more on the price of the laptop %s by %d \n", m2.model, m1.model, price);
    }
    if (m1.price = m2.price)
    {
        printf("Laptops have the same price\n");
    }
    // сравниваем по году выпуска
    if (m1.year > m2.year)
    {
        year = m1.year - m2.year;
        printf("The year of the laptop %s is more on the year of the laptop %s by %d \n", m1.model, m2.model, year);
    }
    if (m1.year < m2.year)
    {
        year = m2.year - m1.year;
        printf("The year of the laptop %s is more on the year of the laptop %s by %d \n", m2.model, m1.model, year);
    }
    if (m1.year = m2.year)
    {
        printf("Laptops have the same year\n");
    }

}

int main()
{
	
}

