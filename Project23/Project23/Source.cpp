#include<iostream>
#include<string>
using namespace std;
int main()
{
	int book = 7;
	int fine = 1;
	int days;
	string choice;
	while (1)
	{
		cout << "Menu \n";
		cout << "1.Borrow \n";
		cout << "2. Return \n";
		cout << "3. Quit(Q) \n";
		cout << "Select One: \n";
		cin >> choice;
		if (choice == "1")
		{
			if (book > 0)
			{
				book--;
				cout << "Book Borrowed \n";
			}
			else
			{
				cout << "No book available\n";

			}
		}
		else if (choice == "2")
		{
			if (book < 7)
			{
				book++;
				cout << "Enter the NO. of Days Late: ";
				cin >> days;
				if (days > 5)
				{
					fine = (days-5) * fine;
				}
				cout << "Book Returned\n";
				cout << "Total fine: " << fine << "$" << endl;
			}
			else
			{
				cout << "Can't Return Library is full \n";

			}

		}
		else if (choice == "3" || choice == "Q" || choice == "q")
		{


			cout << "Thankyou for using library\n";
			break;
		}
		else
		{
			cout << "Invalid Choice\n";
		}

	}
	system("pause");
	return 0;
}