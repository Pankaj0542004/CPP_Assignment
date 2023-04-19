<<<<<<< HEAD
#include <iostream>
class MultiplicationTable 
{
public:
    MultiplicationTable(int n) 
	{
        num = n;
    }

    void printTable() {
        for (int i = 1; i <= 10; i++) 
		{
            std::cout << num << " x " << i << " = " << (num * i) << std::endl;
        }
    }

private:
    int num;
};

int main() 
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    MultiplicationTable table(n);
    table.printTable();

    return 0;
}
=======
#include <iostream>
class MultiplicationTable 
{
public:
    MultiplicationTable(int n) 
	{
        num = n;
    }

    void printTable() {
        for (int i = 1; i <= 10; i++) 
		{
            std::cout << num << " x " << i << " = " << (num * i) << std::endl;
        }
    }

private:
    int num;
};

int main() 
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    MultiplicationTable table(n);
    table.printTable();

    return 0;
}
>>>>>>> 71b0133 (Hello)
