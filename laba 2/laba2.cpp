#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#define LEN 25
#define STD ""
typedef struct {

	char model[LEN];	//модель ноутбука
	int RAM_size;// объем оперативной памяти
	int CPU_frequency; //частота процессора
	double price;// цена ноутбука
	int year;// Год производства
} laptop_factory;


laptop_factory init(char name[LEN], int ram, int freq, double pr, int year)
{
    laptop_factory check;
    rewind(stdin);    
    strcpy_s(check.model, name);
    check.RAM_size = ram;
    check.CPU_frequency = freq;
    check.price = pr;     
    check.year = year;
    return check;
}

laptop_factory input()
{
    laptop_factory lap;
    init(STD,0, 0, 0, 0);
    printf("Enter model: \n");
    rewind(stdin); 
    gets_s(lap.model, LEN);
    printf("Enter RAM size(GB) : \n");
    scanf_s("%d", &lap.RAM_size);
    printf("Enter CPU frequency(Hz) : \n");
    scanf_s("%d", &lap.CPU_frequency);
    printf("Enter price(Rubles) : \n");
    scanf_s("%lf", &lap.price);
    printf("Enter year : \n");
    scanf_s("%d", &lap.year);
    return lap;
}

void output(laptop_factory check)
{
    printf("Model laptop: %s\n", check.model);
    printf("RAM size laptop: %d gb\n", check.RAM_size);
    printf("CPU frequency laptop: %d Hz\n", check.CPU_frequency);
    printf("Price laptop: %g rubles\n", check.price);
    printf("Release year laptop: %d\n", check.year);
}

void add_price(laptop_factory m1, laptop_factory m2)
{
    double sum;
    sum = m1.price + m2.price;
    printf("Total price of laptop: %g rubles\n", sum);
}

void compare_laptop(laptop_factory m1, laptop_factory m2)
{
    int ram=0, cpu=0, year=0;
    double price=0;
    printf("Compare laptop: %s and laptop: %s\n", m1.model, m2.model);

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
    if (m1.RAM_size == m2.RAM_size)
    {
        printf("Laptops have the same RAM\n");
    }    
    // сравниваем по частоте
    if (m1.CPU_frequency > m2.CPU_frequency)
    {
        cpu = m1.CPU_frequency - m2.CPU_frequency;
        printf("The CPU frequency of the laptop %s is more on the CPU frequency of the laptop %s by %d Hz\n", m1.model, m2.model, cpu);
    }
    if (m1.CPU_frequency < m2.CPU_frequency)
    {
        cpu = m2.CPU_frequency - m1.CPU_frequency;
        printf("The CPU frequency of the laptop %s is more on the CPU frequency of the laptop %s by %d Hz\n", m2.model, m1.model, cpu);
    }
    if (m1.CPU_frequency == m2.CPU_frequency)
    {
        printf("Laptops have the same CPU frequency\n");
    }
    // сравниваем по цене
    if (m1.price > m2.price)
    {
        price = m1.price - m2.price;
        printf("The price of the laptop %s is more on the price of the laptop %s by %g rubles \n", m1.model, m2.model, price);
    }
    if (m1.price < m2.price)
    {
        price = m2.price - m1.price;
        printf("The price of the laptop %s is more on the price of the laptop %s by %g rubles\n", m2.model, m1.model, price);
    }
    if (m1.price == m2.price)
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
    if (m1.year == m2.year)
    {
        printf("Laptops have the same year\n");
    }

}

int main()
{
    laptop_factory laptop1;
    laptop_factory laptop2;
   
    laptop1 = init("model1",0, 0, 0, 0);
    laptop2 = init("model2",0, 0, 0, 0);
    printf("Initialization: \n");

    laptop2 = init("Asus Zenbook", 4, 2500, 35000, 2017);   
    laptop1 = init("Asus NITRO 5", 8, 3500, 60000, 2020);

    output(laptop1);   
    output(laptop2); 
    printf("\nEntering: \n");
    //laptop1 = input();
    //laptop2 = input();    
    output(laptop1);
    output(laptop2);
    add_price(laptop1, laptop2);
    compare_laptop(laptop1, laptop2);

    printf("\n\nWorking with dynamic variables\n");
    laptop_factory* laptop3;
    laptop_factory* laptop4;
    laptop3 = (laptop_factory*)malloc(sizeof(laptop_factory));
    laptop4 = (laptop_factory*)malloc(sizeof(laptop_factory));
    *laptop3 = init("model3", 0, 0, 0, 0);
    laptop4 = &(init("model4", 0, 0, 0, 0));
    printf("\nInitialization: \n");
    output(*laptop3);
    output(*laptop4);
    printf("\nEntering: \n");
    //*laptop3 = input();
    //laptop4 = &(input());

    *laptop3 = init("Asus Zenbook", 4, 2500, 35000, 2017);
    laptop4 = &(init("Asus NITRO 5", 8, 3500, 60000, 2020));

    output(*laptop3);
    output(*laptop4);
    add_price(*laptop3, *laptop4);
    compare_laptop(*laptop3, *laptop4);
    printf("laptop 3: %p\n", laptop3);
    printf("laptop 4: %p\n", laptop4);    
    free(laptop3);
        

    _getch();
    return 0;

}

