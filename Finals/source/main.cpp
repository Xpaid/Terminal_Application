//  Final Project of Jetro Apilado. & Jules Vyen San Mateo.
//  Enjoy |:>|
#include <iostream>
#include <stdio.h> // printf
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <iomanip> // for multiplication table
#include <algorithm>
#include <cmath>  // for area()
#include <random> // for toss coin()
#include <Windows.h> // sleep

void loading()
{
	system("COLOR 0E");
	system("cls");
	printf("\x1b[?25l");

	//Set ASCII to print special character.
	//Code page 437
	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int bar1 = 177, bar2 = 219;

	std::cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading...";
	std::cout << "\n\n\n\n\t\t";

	for (int i = 0; i < 25; i++)
		std::cout << (char)bar1;

	std::cout << "\r";
	std::cout << "\t\t\t\t\t\t";
	for (int i = 0; i < 25; i++)
	{
		std::cout << (char)bar2;
		Sleep(50);
	}
	system("cls");
}

std::string login()
{
	std::string status;
	int attempt_count = 0;
	static std::string pass;
	const std::string password = "pass";

	do
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "              #                #    # # # #   #         # # #       # # #     #         #    # # # #                      \n";
		std::cout << "               #     # #       #    #         #        #      #   #       #   # #     # #    #                            \n";
		std::cout << "                #   #   #     #     # # # #   #        #          #   #   #   #   #  #  #    # # # #                      \n";
		std::cout << "                 #  #     #  #      #         #        #      #   #       #   #    #    #    #                            \n";
		std::cout << "                   #       #        # # # #   # # # #   # # #       # # #     #         #    # # # #                      \n\n\n";
		std::cout << "                                                     Login | [x] exit                                                     \n";
		std::cout << "                                                      Password: ";

		std::getline(std::cin, pass);
		if (pass == password)
			return status = "granted";

		if (pass._Equal("x") || pass._Equal("X"))
			return status = "exit";

		attempt_count++;
		std::cout << "Try again" << std::endl;

	} while (attempt_count < 3);

	return status = "failed";
}

class Calculator    // #1. Calculator
{
public:
	void add()
	{
		float addend1, addend2, sum;
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n" << std::endl;
		std::cout << "                                              You Selected Addition                                                       \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                 Enter Num1: ";
		while (!(std::cin >> addend1))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                              You Selected Addition                                                       \n";
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                 Enter Num1: ";
			
		}
		std::cout << "                                                                                                                              \n" << std::endl;
		std::cout << "                                                    Plus   : ";
		
		while (!(std::cin >> addend2))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                              You Selected Addition                                                       \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                 Enter Num1: " << addend1 <<                                             "\n" << std::endl;
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                    Plus   : ";
		}

		sum = addend1 + addend2;
		std::cout << "                                                                                                                             \n";
		std::cout << "                                                 " << addend1 << "  +  " << addend2 << "  =  " << sum                            << std::endl;
	    system("pause");
		return;
	}

	void minus()
	{
		float minuend, subtrahend, difference;
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n" << std::endl;
		std::cout << "                                            You Selected Subtraction                                                      \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                 Enter Num1: ";
		while (!(std::cin >> minuend))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                            You Selected Subtraction                                                      \n";
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                 Enter Num1: ";

		}
		std::cout << "                                                                                                                              \n" << std::endl;
		std::cout << "                                                   Minus   : ";

		while (!(std::cin >> subtrahend))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                            You Selected Subtraction                                                      \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                 Enter Num1: " << minuend <<                                             "\n" << std::endl;
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                   Minus   : ";
		}

		difference = minuend - subtrahend;
		std::cout << "                                                                                                                              \n";
		std::cout << "                                                 " << minuend << "  -  " << subtrahend << "  =  " << difference << std::endl;
		system("pause");
		return;
	}

	void multi()
	{
		float multiplicand, multiplier, product;
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n" << std::endl;
		std::cout << "                                            You Selected Multiplication                                                   \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                 Enter Num1: ";
		while (!(std::cin >> multiplicand))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                            You Selected Multiplication                                                   \n";
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                 Enter Num1: ";

		}
		std::cout << "                                                                                                                              \n" << std::endl;
		std::cout << "                                                   Times   : ";

		while (!(std::cin >> multiplier))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                            You Selected Multiplication                                                       \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                 Enter Num1: " << multiplicand << "\n" << std::endl;
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                   Times   : ";
		}

		product = multiplicand * multiplier;
		std::cout << "                                                                                                                              \n";
		std::cout << "                                                 " << multiplicand << "  x  " << multiplier << "  =  " << product << std::endl;
		system("pause");
		return;
	}

	void div()
	{
		float dividend, divisor, quotient, remainder;
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n" << std::endl;
		std::cout << "                                              You Selected Division                                                       \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                 Enter Num1: ";
		while (!(std::cin >> dividend))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                              You Selected Division                                                       \n";
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                                 Enter Num1: ";

		}
		std::cout << "                                                                                                                              \n" << std::endl;
		std::cout << "                                                Divided by   : ";

		while (!(std::cin >> divisor))
		{
			system("cls");
			std::cin.clear();
			std::cin.ignore();
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                                                                                          \n" << std::endl;
			std::cout << "                                              You Selected Addition                                                       \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                 Enter Num1: " << dividend << "\n" << std::endl;
			std::cout << "                                                   Invalid                                                                \n";
			std::cout << "                                               Divided by  : ";
		}

		quotient = floor(dividend / divisor);
		remainder = fmodf(dividend, divisor);
		std::cout << "                                                                                                                             \n";
		std::cout << "                                                 " << dividend << "  /  " << divisor << "  =  " << quotient << " r." << remainder << std::endl;
		system("pause");
		return;
	}
};

void grocery()    // #2. Grocery
{
	char yn = 'y';
	int items = 0;
	double price = 0, money = 0, change = 0, total = 0;
	bool lack = false;
	while (yn == 'y')
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                       GROCERY                                                            \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                   SubTotal: " << total << " php" << "                                  \n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                               How much is the item: ";
		
		while (!(std::cin >> price)) //if input not same with the storage type, reapeat.
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       GROCERY                                                            \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                   SubTotal: " << total << " php" << "                                  \n\n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                               How much is the item: ";

			std::cin.clear();
			std::cin.ignore();
		}
		std::cout << "                                                                                                                             \n\n";
		std::cout << "                                                   How many item   : ";

		while (!(std::cin >> items)) //if input not same with the storage type, reapeat.
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       GROCERY                                                            \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                   SubTotal: " << total << " php" << "                                  \n\n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                               How much is the item: " << price <<" " <<"                                 \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "\n                                                   How many item   : ";
			std::cin.clear();
			std::cin.ignore();
		}

		total += price * items;
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                       GROCERY                                                            \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                   SubTotal: " << total << " php" << "                                  \n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                             Would you like to buy more [y] [n]";
		yn = _getch();
		
		while (yn != 'n' && yn != 'N' && yn != 'y' && yn != 'Y') 
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       GROCERY                                                            \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                   SubTotal: " << total << " php" << "                                  \n\n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                             Would you like to buy more [y] [n]";
			fflush(stdin);
			yn = _getch();	
		}

		system("cls");

		while (yn == 'n' || yn == 'N')
		{
			if (lack == false) 
			{
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       GROCERY                                                           \n";
				std::cout << "                                                                                                                         \n";
				std::cout << "                                                   SubTotal: " << total << " php" << "                                \n\n";
				std::cout << "                                                                                                                         \n";
				std::cout << "                                                                                                                         \n";
				std::cout << "                                                                                                                         \n";
				std::cout << "                                                    Insert Money: ";

			}
			else 
			{
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       GROCERY                                                            \n";
				std::cout << "                                                                                                                          \n";
				std::cout << "                                                   SubTotal: " << total << " php" << "                                 \n\n";
				std::cout << "                                                                                                                          \n";
				std::cout << "                                                   Insuficient fund                                                       \n";
				std::cout << "                                                                                                                          \n";
				std::cout << "                                                    Insert Money: ";
			}
			
			while (!(std::cin >> money))
			{
				system("cls");
				std::cin.clear();
				std::cin.ignore();
				if (lack == false)
				{
					std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
					std::cout << "                                                       GROCERY                                                            \n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                   SubTotal: " << total << " php" << "                                   \n\n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                    Insert Money: ";

				}
				else
				{
					std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
					std::cout << "                                                       GROCERY                                                            \n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                   SubTotal: " << total << " php" << "                                   \n\n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                   Insuficient fund                                                       \n";
					std::cout << "                                                                                                                          \n";
					std::cout << "                                                    Insert Money: ";
				}
			}
			if (money == total || money > total)
			{
				system("cls");
				change = money - total;
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       GROCERY                                                            \n";
				std::cout << "                                                                                                                          \n";
				std::cout << "                                                Thank you for buying!                                                  \n\n";
				std::cout << "                                                Amount paid: " << money << " php" << "                                \n\n";                                                            
				std::cout << "                                                Total price: " << total  << " php" << "                               \n\n";                                                             
				std::cout << "                                                   Change  : " << change << " php" << "                               \n\n";
				system("pause");
				yn = 'y';
				return;
			}
			else if (money < total)
			{
				system("cls");
				lack = true;
			}
		} 
	}
}

void average()    // #3. Average
{
	double num, avg = 0;
	std::vector <double> numbers;
	char another = 'y';
	bool one_more = true;
	
	while (one_more == true)
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                     Average                                                              \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                               Numbers: ";
		std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<double>(std::cout, " , "));
		std::cout << "\n\n                                          Enter number: ";
		while (!(std::cin >> num))
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Average                                                              \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                               Numbers: ";
			std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<double>(std::cout, " , "));
			std::cout << "\n\n                                          Enter number: ";
			std::cin.clear();
			std::cin.ignore();
		} 
		numbers.push_back(num);
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                     Average                                                              \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                               Numbers: ";
		std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<double>(std::cout, " , "));
		std::cout << "\n\n                                          Add more? [y] [n]";
		another = _getch();
		while (another != 'n' && another != 'N' && another != 'y' && another != 'Y')
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Average                                                              \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                               Numbers: ";
			std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<double>(std::cout, " , "));
			std::cout << "\n\n                                          Add more? [y] [n]";
			another = _getch();
		}
		system("cls");

		if (another == 'n' || another == 'N')
		{
			one_more = false;
		}
	}
	system("cls");
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
	std::cout << "                                                     Average                                                              \n";
	std::cout << "                                                                                                                          \n";
	std::cout << "                                               Numbers: ";
	std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<double>(std::cout, " , "));
	avg = std::accumulate(numbers.begin(), numbers.end(), avg) / numbers.size();
	std::cout << "\n\n                                              The average is " << avg << "\n\n" << std::endl;
	system("pause");
	return;
}

void convert()    // #4 5 6. km m cm, vice versa Conversion Table 
{
	double meters;
	double km;
	double cm;
	double value;

	while (true)
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                       Conversion                                                       \n\n\n";
		std::cout << "                                        [1] cm to m";
		std::cout << "                 [2] cm to km\n" << std::endl;
		std::cout << "                                        [3] m to cm";
		std::cout << "                 [4] m to km\n" << std::endl;
		std::cout << "                                        [5] km to cm";
		std::cout << "                [6] km to m\n" << std::endl;
		std::cout << "                                                        [x] Back                                                          \n\n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
		std::cout << "\n                                               Enter your selection: ";

		char option = _getch();

		if (option == 'x' || option == 'X') {
			// exit the program
			return;
		}

		while (option < '1' || option > '6')
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       Conversion                                                      \n\n\n";
			std::cout << "                                        [1] cm to m";
			std::cout << "                 [2] cm to km\n" << std::endl;
			std::cout << "                                        [3] m to cm";
			std::cout << "                 [4] m to km\n" << std::endl;
			std::cout << "                                        [5] km to cm";
			std::cout << "                [6] km to m\n" << std::endl;
			std::cout << "                                                        [x] Back                                                          \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
			std::cout << "\n                                               Enter your selection: ";

			option = _getch();
			
			if (option == 'x' || option == 'X') {
				// exit the program
				return;
			}
		}
		
		while (true)
		{
			system("cls");
			
			switch (option)
			{
			case '1':
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       Conversion                                                      \n\n\n";
				std::cout << "                                        [1] cm to m";
				std::cout << "                             \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                            \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                           \n" << std::endl;
				std::cout << "                                                        [x] Back                                                          \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
				break;
			case '2':
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       Conversion                                                     \n\n\n";
				std::cout << "                                                   ";
				std::cout << "                 [2] cm to km\n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                            \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                           \n" << std::endl;
				std::cout << "                                                        [x] Back                                                          \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
				break;
			case '3':
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       Conversion                                                     \n\n\n";
				std::cout << "                                                   ";
				std::cout << "                             \n" << std::endl;
				std::cout << "                                        [3] m to cm";
				std::cout << "                            \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                           \n" << std::endl;
				std::cout << "                                                        [x] Back                                                          \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
				break;
			case '4':
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       Conversion                                                     \n\n\n";
				std::cout << "                                                   ";
				std::cout << "                             \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                 [4] m to km\n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                           \n" << std::endl;
				std::cout << "                                                        [x] Back                                                          \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
				break;
			case '5':
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       Conversion                                                     \n\n\n";
				std::cout << "                                                   ";
				std::cout << "                             \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                            \n" << std::endl;
				std::cout << "                                       [5] km to cm";
				std::cout << "                           \n" << std::endl;
				std::cout << "                                                        [x] Back                                                          \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
				break;
			case '6':
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                       Conversion                                                     \n\n\n";
				std::cout << "                                                   ";
				std::cout << "                             \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                            \n" << std::endl;
				std::cout << "                                                   ";
				std::cout << "                [6] km to m\n" << std::endl;
				std::cout << "                                                        [x] Back                                                          \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
			}
			std::cout << "\n                                                   Enter Value: ";
			std::cin >> value;
			
			if (std::cin.fail())
			{
				// input is not a number, clear the error state and try again
				std::cin.clear();
				std::cin.ignore();
				continue;
			}
			else
			{
				break;
			}	
		}
		switch (option)
		{
		case '1':
			// convert from centimeters to meters
			meters = value / 100.0;
			std::cout << "\n\n                                          " << value << " cm is equivalent to " << meters << " meters." << std::endl;
			break;
		case '2':
			// convert from centimeters to kilometers
			km = value / 100000.0;
			std::cout << "\n\n                                          " << value << " cm is equivalent to " << km << " kilometers." << std::endl;
			break;
		case '3':
			// convert from meters to centimeters
			cm = value * 100.0;
			std::cout << "\n\n                                          " << value << " meters is equivalent to " << cm << " centimeters." << std::endl;
			break;
		case '4':
			// convert from meters to kilometers
			km = value / 1000.0;
			std::cout << "\n\n                                          " << value << " meters is equivalent to " << km << " kilometers." << std::endl;
			break;
		case '5':
			// convert from kilometers to centimeters
			cm = value * 100000.0;
			std::cout << "\n\n                                          " << value << " kilometers is equivalent to " << cm << " centimeters." << std::endl;
			break;
		case '6':
			// convert from kilometers to meters
			meters = value * 1000.0;
			std::cout << "\n\n                                          " << value << " kilometers is equivalent to " << meters << " meters." << std::endl;
			break;
		default:
			std::cout << "\n\n                                          " << " Invalid option." << std::endl;
		}
		std::cout << "\n" << std::endl;
		system("pause");
		system("cls");
	}
}

void factorial()    // #7. for loop program (1/3)
{
	system("cls");
	while (true)
	{
		char again;
		int num;
		long double factorial = 1.0;

		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                Factorial Finder                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                          >>Optimal result 1 - 9 only<<                                                   \n";
		std::cout << "                                          Enter a positive integer only: ";
		while (!(std::cin >> num))
		{
			std::cin.clear();
			std::cin.ignore();
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                Factorial Finder                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                          >>Optimal result 1 - 9 only<<                                                   \n";
			std::cout << "                                          Enter a positive integer only: ";
		}
		if (num < 0)
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                Factorial Finder                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                              Error! Factorial of a negative number doesn't exist                                          ";
		}
			
		else 
		{
			for (int i = 1; i <= num; ++i) 
			{
				factorial *= i;
			}
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                Factorial Finder                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                           The factorial of " << num << " is " << factorial << "                          \n";
		}

		std::cout << "\n\n                                         Try Again ? [y]yes  [n/x]exit: ";
		again = _getch();
		
		while(again != 'y' && again != 'Y' && again != 'n' && again != 'N' && again != 'x' && again != 'X')
		{
			std::cin.clear();
			std::cin.ignore();
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                Factorial Finder                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                           The factorial of " << num << " is " << factorial << "                          \n";
			std::cout << "\n\n                                         Try Again ? [y]yes  [n/x]exit: ";
			again = _getch();
		}
		if (again == 'Y' || again == 'y')
		{
			system("cls");
			num = 0;
			long double factorial = 1.0;
			continue;
		}
		else
		{
			system("cls");
			break;
		}
	}
}

void sumofNaturalNumbetween()    // #8. for loop program (2/3)
{
	while (true)
	{
		char again;
		int num1, num2;
		long double sum = 0.0;
		
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                          The Sum of Natural Numbers in Bewtween                                        \n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                   Enter a number: ";
		while ((!(std::cin >> num1)) || num1 < 0) //filter negative and non-number
		{
			std::cin.clear();
			std::cin.ignore();
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                          The Sum of Natural Numbers in Bewtween                                        \n\n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                              Natural numbers are positives                                               \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                   Enter a number: ";
		}
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                          The Sum of Natural Numbers in Bewtween                                        \n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                 Enter a higher number: ";
		while ((!(std::cin >> num2)) || (num1 > num2)) //filter if not number,& not higher number
		{
			std::cin.clear();
			std::cin.ignore();
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                          The Sum of Natural Numbers in Bewtween                                        \n\n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                                 Enter a higher number: ";
		}
		//set condition about when user input higher instead of lower vice versa
		for (int i = num1; i <= num2; ++i) 
		{
				sum += i;
		}
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                          The Sum of Natural Numbers in Bewtween                                        \n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                         The sum of numbers between " << num1 << " and " << num2 << " is " << sum << "  \n\n";
		
		std::cout << "                                                                                                                          \n";
		std::cout << "                                              Try Again ? [y]yes  [n/x]exit: ";
		again = _getch();

		while (again != 'y' && again != 'Y' && again != 'n' && again != 'N' && again != 'x' && again != 'X')
		{
			std::cin.clear();
			std::cin.ignore();
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                          The Sum of Natural Numbers in Bewtween                                        \n\n";
			std::cout << "                                                                                                                          \n";
			std::cout << "                                         The sum of numbers between " << num1 << " and " << num2 << " is " << sum << "  \n\n";

			std::cout << "                                                                                                                          \n";
			std::cout << "                                              Try Again ? [y]yes  [n/x]exit: ";
			again = _getch();
		}
		if (again == 'Y' || again == 'y')
		{
			system("cls");
			sum = 0;
			long double factorial = 1.0;
			continue;
		}
		else
		{
			system("cls");
			break;
		}
	}
}

void multiplication_table()    // #9. for loop program (1/3)
{
	system("cls");
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";
	std::cout << "            Multiplication Table          " << std::endl;
	// Set the precision for floating point numbers
	std::cout << std::setprecision(2);

	// Use fixed notation for floating point numbers
	std::cout << std::fixed;

	// Print the header row
	std::cout << "x";
	for (int i = 1; i <= 10; i++) 
	{
		std::cout << std::setw(4) << i;
	}
	std::cout << std::endl;

	// Print the table body
	for (int i = 1; i <= 10; i++) 
	{
		std::cout << i;
		for (int j = 1; j <= 10; j++) 
		{
			std::cout << std::setw(4) << i * j;
		}
		std::cout <<"  "<< std::endl;
	}
	std::cout << "\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n\n";
	system("pause");
	system("cls");
}

void oddeven()    // #10. Ternary Operator Program (1/3)
{
	while (true)
	{
		system("cls");

		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                       Odd or Even                                                    \n\n\n\n";
		int num;
		char rep0dddEven;
		std::cout << "                                                     Enter Number: ";
		while (!(std::cin >> num))
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       Odd or Even                                                    \n\n\n\n";
			std::cin.clear();
			std::cin.ignore();
			std::cout << "                                                     Enter Number: ";
		}
		std::cout << "                                                                                                                         \n\n";
		num % 2 == 0 ? std::cout << "                                                        " << num << " is even\n\n\n" << std::endl :
			           std::cout << "                                                        " << num << " is odd\n\n\n"  << std::endl;
		std::cout << "                                                      Again [y] [n]";
		rep0dddEven = _getch();
		while (rep0dddEven != 'y' && rep0dddEven != 'Y' && rep0dddEven != 'n' && rep0dddEven != 'N')
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       Odd or Even                                                    \n\n\n\n";
			std::cout << "                                                     Enter Number: " << num << std::endl;
			std::cout << "                                                                                                                     \n\n\n";
			num % 2 == 0 ? std::cout << "                                                        " << num << " is even\n\n\n" << std::endl :
				           std::cout << "                                                        " << num << " is odd\n\n\n"  << std::endl;
			std::cout << "                                                      Again [y] [n]";
			rep0dddEven = _getch();
		}
		if (rep0dddEven == 'n' || rep0dddEven == 'N')
		{
			return;
		}
	}	
}

void passing_grade()    // #11. Ternary Operator Program (2/3)
{
	while (true)
	{
		system("cls");

		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                       Passing grade?                                                    \n\n\n\n";
		double grade;
		char grade_rep;
		std::cout << "                                                      Enter grade: ";
		while (!(std::cin >> grade))
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       Passing grade?                                                    \n\n\n\n";
			std::cin.clear();
			std::cin.ignore();
			std::cout << "                                                      Enter grade: ";
		}

		std::cout << "                                                                                                                         \n\n";
		grade >= 75 && grade <= 100 ?
			std::cout << "                                                       " << grade << " is passed\n\n\n" << std::endl :
			grade < 75 ?
			std::cout << "                                                       " << grade << " is failed\n\n\n" << std::endl :
			std::cout << "                                                       " << grade << " is invalid\n\n\n" << std::endl;
		    std::cout << "                                                       Again [y] [n]";
		grade_rep = _getch();
		while (grade_rep != 'y' && grade_rep != 'Y' && grade_rep != 'n' && grade_rep != 'N')
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                       Passing grade?                                                    \n\n\n\n";
			std::cout << "                                                      Enter grade: " << grade << std::endl;
			std::cout << "                                                                                                                     \n\n\n";
			grade >= 77 && grade <= 100 ?
				std::cout << "                                                       " << grade << " is passed\n\n\n" << std::endl :
				grade > 75 ?
				std::cout << "                                                       " << grade << " is failed\n\n\n" << std::endl :
				std::cout << "                                                       " << grade << " is Invalid\n\n\n" << std::endl;
				std::cout << "                                                       Again [y] [n]";
			grade_rep = _getch();
		}
		if (grade_rep == 'n' || grade_rep == 'N')
		{
			return;
		}
	}
}

void palindrome()    // #12. Ternary Operator Program (3/3)
{
	system("cls");
	// Ask the user if the check should be case-sensitive
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
	std::cout << "                                                     Palindrome                                                         \n\n\n";
	std::cout << "                            Should the palindrome check be case-sensitive? [y][n] [x]exit: ";
	char response;
	response = _getch();
	while (response != 'y' && response != 'Y' && response != 'n' && response != 'N' && response != 'x' && response != 'X')
	{
		system("cls");
		response = NULL;
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                     Palindrome                                                         \n\n\n";
		std::cout << "                            Should the palindrome check be case-sensitive? [y][n] [x]exit: ";
		response = _getch();
	}
	if (response == 'x' || response == 'X')
		return;

	// Get the input string from the user
	std::string input;
	std::cout << "                                                                                                                         ";
	std::cout << "                                                                                     " <<   response       <<"               \n\n";
	std::cout << "                                             Enter a string to check: ";
	std::cin >> input;

	// Check if the input string is a palindrome
	bool result = (input == std::string(input.rbegin(), input.rend())) ? true : false;  // If the input string is equal to its reverse
                                                                                        // Then it is a palindrome
		                                                                                // Otherwise, it is not a palindrome
	// If the check is case-sensitive, compare the input string and its reverse directly
	if (response == 'y')
	{
		result = (input == std::string(input.rbegin(), input.rend()));
	}
	// Otherwise, convert the input string and its reverse to lowercase and compare them
	else
	{
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		std::string reverse = std::string(input.rbegin(), input.rend());
		std::transform(reverse.begin(), reverse.end(), reverse.begin(), ::tolower);
		result = (input == reverse);
	}

	// Print the result
	if (result)
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                          Palindrome                                                      \n" << std::endl;
		std::cout << "                                                     " << "                 " << "                                        \n";
		std::cout << "                                                 " << "The string is a palindrome." << "                                  \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		system("pause");
	}
	else
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                         Palindrome                                                       \n" << std::endl;
		std::cout << "                                                     " << "                 " << "                                        \n";
		std::cout << "                                              " << "The string is not a palindrome." << "                                 \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		system("pause");
		// not done
	}
}

void area()    // #13. Switch Case Program (1/3)
{
	while (true)
	{
		char shape;
		double base, height, radius, side, pi = 3.1415926535;
		// Ask the user to input the shape they want to find the area of
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                     Find the Area                                                      \n\n";
		std::cout << "                                 [1] Triangle    [2] Circle    [3] Square    [x] Back";
		shape = _getch();
		while (shape != '1' && shape != '2' && shape != '3' && shape != 'x' && shape != 'X')
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Find the Area                                                      \n\n";
			std::cout << "                                 [1] Triangle    [2] Circle    [3] Square    [x] Back";
			shape = ' ';
			shape = _getch();
		}
		if (shape == 'x' || shape == 'X') // [x] exit
		{
			break;
			return;
		}
		// Use a switch case to select the appropriate calculation for the specified shape
		switch (shape)
		{
		case '1': // Triangle

			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Area                                                        \n\n";
			std::cout << "                                 [1] Triangle                                                                              \n\n";

			std::cout << "                                     Enter the base of the triangle  : ";
			while ((!(std::cin >> base)) || base < 0)
			{
				std::cin.clear();
				std::cin.ignore();
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Area                                                        \n\n";
				std::cout << "                                 [1] Triangle                                                                              \n\n";

				std::cout << "                                     Enter the base of the triangle  : ";
			}
			std::cout << "\n\n                                     Enter the height of the triangle: ";
			while ((!(std::cin >> height)) || base < 0)
			{
				std::cin.clear();
				std::cin.ignore();
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Area                                                        \n\n";
				std::cout << "                                 [1] Triangle                                                                              \n\n";
				std::cout << "                                     Enter the base of the triangle  : " << base << "                                   \n\n";
				std::cout << "\n                                     Enter the height of the triangle: ";
			}

			std::cout << "\n\n                                      The area of the triangle is: " << (base * height) / 2 << "                      \n\n";
			system("pause");
			break;

		case '2': // Circle

			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Area                                                        \n\n";
			std::cout << "                                                 [2] Circle                                                                \n\n";
			std::cout << "\n                                         Enter the radius of the circle: ";
			while ((!(std::cin >> radius)) || radius <= 0)
			{
				system("cls");
				std::cin.clear();
				std::cin.ignore();
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Area                                                        \n\n";
				std::cout << "                                                 [2] Circle                                                                \n\n";
				std::cout << "\n                                         Enter the radius of the circle: ";
			}

			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Area                                                        \n\n";
			std::cout << "                                                 [2] Circle                                                                \n\n";
			std::cout << "\n                                         Enter the radius of the circle: " << radius << "                             \n\n";
			std::cout << "\n                                         The area of the circle is: " << pi * pow(radius, 2) << "        \n\n";
			system("pause");
			break;

		case '3': // Square

			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Area                                                        \n\n";
			std::cout << "                                                               [3] Square                                                  \n\n";
			std::cout << "\n                                         Enter the side of the square: ";
			while ((!(std::cin >> side)) || side <= 0)
			{
				system("cls");
				std::cin.clear();
				std::cin.ignore();
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Area                                                        \n\n";
				std::cout << "                                                               [3] Square                                                  \n\n";
				std::cout << "\n                                       Enter the side of the square: ";
			}

			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Area                                                        \n\n";
			std::cout << "                                                               [3] Square                                                  \n\n";
			std::cout << "\n                                         Enter the side of the square: " << side << "                                 \n\n";
			std::cout << "\n                                         The area of the square is: " << pow(side, 2) << "                 \n\n";
			system("pause");
			break;

		default:
			// If the user input an invalid shape. i dont see this using, but still.
			std::cout << "Invalid shape" << std::endl;
			break;
		}
	}
}

void perimeter()    // #14. Switch Case Program (2/3)
{
	while (true)
	{
		char shape;
		double perimeter = 0;
		double pi = 3.1415926535;
		std::vector <double> triangle;
		std::vector <double> circle;
		std::vector <double> square;
		
		// Ask the user to input the shape they want to find the area of
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                   Find the Perimeter                                                   \n\n";
		std::cout << "                                 [1] Triangle    [2] Circle    [3] Square    [x] Back";
		shape = _getch();
		while (shape != '1' && shape != '2' && shape != '3' && shape != 'x' && shape != 'X')
		{
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Perimeter                                                   \n\n";
			std::cout << "                                 [1] Triangle    [2] Circle    [3] Square    [x] Back";
			shape = ' ';
			shape = _getch();
		}
		if (shape == 'x' || shape == 'X') // [x] exit
		{
			break;
			return;
		}
		// Use a switch case to select the appropriate calculation for the specified shape
		
		switch (shape)
		{
		case '1': // Triangle
			
			while (triangle.size() != 3)
			{
				double side = 0;
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Perimeter                                                   \n\n";
				std::cout << "                                 [1] Triangle                                                                              \n\n";
				std::cout << "                                                 sides: ";
				std::copy(triangle.begin(), triangle.end(), std::ostream_iterator<double>(std::cout, " , "));
				std::cout << "[" << triangle.size() << "/3]\n\n";
				std::cout << "\n                                            Enter the sides of the triangle : ";
				while ((!(std::cin >> side)) || side < 0)
				{
					std::cin.clear();
					std::cin.ignore();
					system("cls");
					std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
					std::cout << "                                                   Find the Perimeter                                                   \n\n";
					std::cout << "                                 [1] Triangle                                                                              \n\n";
					std::cout << "                                                 sides: ";
					std::copy(triangle.begin(), triangle.end(), std::ostream_iterator<double>(std::cout, " , "));
					std::cout << "[" << triangle.size() << "/3]\n\n";
					std::cout << "\n                                            Enter the sides of the triangle : ";
				}
				triangle.push_back(side);
			}
			
			perimeter = std::accumulate(triangle.begin(), triangle.end(), perimeter);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Perimeter                                                   \n\n";
			std::cout << "                                 [1] Triangle                                                                              \n\n";
			std::cout << "                                                 sides: ";
			std::copy(triangle.begin(), triangle.end(), std::ostream_iterator<double>(std::cout, " , "));
			std::wcout << "[" << triangle.size() << "/3]\n\n";
			std::cout << "\n                                            The perimeter of the triangle is: " << perimeter  << "                      \n\n";
			triangle.clear();
			perimeter = NULL;
			system("pause");
			break;

		case '2': // Circle 

			while (circle.size() != 1)
			{
				double radius = 0;
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Perimeter                                                   \n\n";
				std::cout << "                                                 [2] Circle                                                                \n\n";
				std::cout << "                                                    radius: ";
				std::copy(circle.begin(), circle.end(), std::ostream_iterator<double>(std::cout, " , "));
				std::cout << "[" << circle.size() << "/1]\n\n";
				std::cout << "\n                                         Enter the raidius of the circle  : ";
				while ((!(std::cin >> radius)) || radius < 0)
				{
					std::cin.clear();
					std::cin.ignore();
					system("cls");
					std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
					std::cout << "                                                   Find the Perimeter                                                   \n\n";
					std::cout << "                                                 [2] Circle                                                                \n\n";
					std::cout << "                                                    radius: ";
					std::copy(circle.begin(), circle.end(), std::ostream_iterator<double>(std::cout, " , "));
					std::cout << "[" << circle.size() << "/1]\n\n";
					std::cout << "\n                                         Enter the raidius of the circle  : ";
				}
				circle.push_back(radius);
			}

			perimeter = 2 * pi * std::accumulate(circle.begin(), circle.end(), perimeter);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Perimeter                                                   \n\n";
			std::cout << "                                                 [2] Circle                                                                \n\n";
			std::cout << "                                                    radius: ";
			std::copy(circle.begin(), circle.end(), std::ostream_iterator<double>(std::cout, " , "));
			std::cout << "[" << circle.size() << "/1]\n\n";
			std::cout << "\n                                         The perimeter of the circle is: " << perimeter << "                      \n\n";
			circle.clear();
			perimeter = NULL;
			system("pause");
			
			break;

		case '3': //square

			while (square.size() != 4)
			{
				double side = 0;
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                   Find the Perimeter                                                   \n\n";
				std::cout << "                                                 [2] Circle                                                                \n\n";
				std::cout << "                                                 sides: ";
				std::copy(square.begin(), square.end(), std::ostream_iterator<double>(std::cout, " , "));
				std::cout << "[" << square.size() << "/4]\n\n";
				std::cout << "\n                                            Enter the sides of the square : ";
				while ((!(std::cin >> side)) || side < 0)
				{
					std::cin.clear();
					std::cin.ignore();
					system("cls");
					std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
					std::cout << "                                                   Find the Perimeter                                                   \n\n";
					std::cout << "                                                               [3] Square                                                  \n\n";
					std::cout << "                                                 sides: ";
					std::copy(square.begin(), square.end(), std::ostream_iterator<double>(std::cout, " , "));
					std::cout << "[" << square.size() << "/4]\n\n";
					std::cout << "\n                                            Enter the sides of the square : ";
				}
				square.push_back(side);
			}

			perimeter = std::accumulate(square.begin(), square.end(), perimeter);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                   Find the Perimeter                                                   \n\n";
			std::cout << "                                                               [3] Square                                                  \n\n";
			std::cout << "                                                 sides: ";
			std::copy(square.begin(), square.end(), std::ostream_iterator<double>(std::cout, " , "));
			std::wcout << "[" << square.size() << "/4]\n\n";
			std::cout << "\n                                            The perimeter of the square is: " << perimeter << "                      \n\n";
			triangle.clear();
			perimeter = NULL;
			system("pause");
			break;

		}
	}
}

void coin_toss()    // #15. Switch Case Program (3/3)
{
	while (true)
	{
		std::random_device rd;
		std::default_random_engine generator(rd());
		std::uniform_int_distribution<int> distribution(0, 1);
		int coin = distribution(generator);
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                     Coint Toss                                                         \n\n";
		std::cout << "                                                                                                                        \n\n\n";
		std::cout << "                                                Press any key to toss                                                   \n\n";
		std::cout << "                                                                                                                        \n";
		std::cout << "                                                                                                                        \n\n";
		std::cout << "                                                      [x] Back                                                          \n\n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		char exit = _getch();

		if (exit == 'x' || exit == 'X')
			return;

		// Use a switch statement to print either "heads" or "tails"
		switch (coin) 
		{
		case 0:
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                          3                                                             \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			Sleep(1000);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                          2                                                             \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			Sleep(1000);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                          1                                                             \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			Sleep(1000);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                        Heads                                                           \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			system("pause");
			break;

		case 1:
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                          3                                                             \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			Sleep(1000);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                          2                                                             \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			Sleep(1000);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                          1                                                             \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			Sleep(1000);
			system("cls");
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			std::cout << "                                                     Coint Toss                                                         \n\n";
			std::cout << "                                                                                                                        \n\n\n";
			std::cout << "                                                        Tails                                                           \n\n";
			std::cout << "                                                                                                                        \n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "                                                                                                                        \n\n";
			std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
			system("pause");
			break;

		default:
			std::cout << "invalid toss" << std::endl;
			break;
		}
	}
}

void credits()    // #16 devs and notices
{
	system("cls");
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
	std::cout << "                                                         Credits                                                          \n";
	std::cout << "                   ~This program is solely created for the first semester finals of Computer Science at                   \n";
	std::cout << "                     Core Gateway College. Any unauthorized use is strictly prohibited and subject to                     \n";
	std::cout << "                      Copyright Infringement. Please direct any inquiries about this program to the                       \n";
	std::cout << "                                                       developers.                                                        \n";
	std::cout << "                      Created by: Jetro Apilado                      Ideas by: Jules Vyen San Mateo                       \n";
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
	system("pause");
}


int main()    //Main function
{
	system("Color 0E");

	std::string login_res = login();

	if (login_res == "granted")
	{
		system("cls");
		//continue
	}
	
	else if (login_res == "failed")
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n" << std::endl;
		std::cout << "                                                     " << "     Access      " << "                                        \n";
		std::cout << "                                                     " << "     Denied      " << "                                        \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		system("pause");
		return 0;
	}

	else if (login_res == "exit")
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n" << std::endl;
		std::cout << "                                                     " << "     You      " << "                                           \n";
		std::cout << "                                                     " << "   Quitted    " << "                                           \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "                                                                                                                          \n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		system("pause");
		return 0;
	}
	loading();
	Calculator calc;

	while (true)
	{
		system("cls");
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "                                                        Menu                                                              \n";
		std::cout << "                [A] Calculator          "  <<  "               [B] Grocery  " << "                [C] Average             \n" << std::endl;
		std::cout << "                [D] Conversion          "  <<  "               [E] Factorial" << "                [F] Sum of Nth          \n" << std::endl;
		std::cout << "                [G] Multiplication Table"  <<  "               [H] Odd/Even " << "                [I] Passing Grade       \n" << std::endl;
		std::cout << "                [J] Palindrome          "  <<  "               [K] Find Area" << "                [L] Find Perimeter      \n" << std::endl;
		std::cout << "                [M] Coin Flip           "  <<  "               [N] Credits  " << "                [x] Exit                \n\n";
		std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
		std::cout << "\n\n                                               Enter your selection: ";
		
		char selection;
		selection = _getch();

		if (selection == 'x' || selection == 'X')
		{
			break;
		}
		switch (selection)
		{
		case 'a': case 'A':
			while (true)
			{
				system("cls");
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "                                                        Menu                                                              \n";
				std::cout << "                                                                                                                          \n" ;
				std::cout << "                          [1] Addition      " << "           " << "               [2] Subtraction                         \n" << std::endl;
				std::cout << "                          [3] Multiplication" << "           " << "               [4] Division                            \n";
				std::cout << "                                                                                                                          \n";
				std::cout << "                                                     [x] back                                                             \n\n";
				std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
				std::cout << "\n\nPlease Select Option: ";
				char operation;
				operation = _getch();

				if (operation == 'x' || operation == 'X')
				{
					break;
				}
				switch (operation)
				{
				case '1':
					calc.add();
					break;
				case '2':
					calc.minus();
					break;
				case '3':
					calc.multi();
					break;
				case '4':
					calc.div();
					break;
				}
			}
			break;
			
		case 'b': case 'B':
			grocery();
			break;

		case 'c': case'C':
			average();
			break;

		case 'd': case 'D':
			convert();
			break;

		case 'e': case 'E':
			factorial();
			break;

		case 'f': case 'F':
			sumofNaturalNumbetween();
			break;

		case 'g': case 'G':
			multiplication_table();
			break;
			
		case 'h': case 'H':
			oddeven();
			break;

		case 'i': case 'I':
			passing_grade();
			break;

		case 'j': case 'J':
			palindrome();
			break;

		case 'k': case 'K':
			area();
			break;

		case 'l': case 'L':
			perimeter();
			break;
			
		case 'm': case 'M':
			coin_toss();
			break;

		case 'n': case 'N':
			credits();
			break;

		case 'x': case 'X':
			break; // exit
		}
	}
	system("cls");
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
	std::cout << "                                                                                                                          \n";
	std::cout << "                                                                                                                          \n" << std::endl;
	std::cout << "                                                     " << "     You      " << "                                           \n";
	std::cout << "                                                     " << "   Quitted    " << "                                           \n";
	std::cout << "                                                                                                                          \n";
	std::cout << "                                                                                                                          \n";
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n";
	system("pause");
	return 0;
}
