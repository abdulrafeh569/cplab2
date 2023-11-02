#include <iostream>
#include<string>
using namespace std;

int main() {
    string choice;
    int start, end;

    while (1) {
        cout << "Menu: \n";
        cout << "1. Find prime numbers(F)\n";
        cout << "2. Check if prime (C) \n";
        cout << "3. Quit(Q) \n";
        cout << "Select one: ";
        cin >> choice;

        if (choice == "1" || choice == "Q")
        {

            cout << "Start of Range: ";
            cin >> start;
            cout << "End of range (end): ";
            cin >> end;
            if (start <= end)
            {
                cout << "Prime numbers between " << start << " and " << end << " are: ";
                for (int n = start; n <= end; n++)
                {
                    if (n <= 1)
                        continue;

                    bool Prime = true;
                    for (int i = 2; i * i <= n; ++i)
                    {
                        if (n % i == 0)
                        {
                            Prime = false;
                            break;
                        }
                    }

                    if (Prime)
                    {
                        cout << n << " ";
                    }
                }
                cout << endl;
            }
            else
            {
                cout << "Invalid range. " << endl;
            }
        }
        else if (choice == "2")
        {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            if (n <= 1)
            {
                cout << n << " is not a prime number." << endl;
            }
            else
            {
                bool Prime = true;
                for (int i = 2; i * i <= n; ++i)
                {
                    if (n % i == 0)
                    {
                        Prime = false;
                        break;
                    }
                }

                if (Prime)
                {
                    cout << n << " is a prime number." << endl;
                }
                else
                {
                    cout << n << " is not a prime number." << endl;
                }
            }
        }
        else if (choice == "3")
        {
            cout << endl;
            break;
        }

        else
        {
            cout << "Invalid choice." << endl;
        }
    }
    system("pause");
    return 0;
}