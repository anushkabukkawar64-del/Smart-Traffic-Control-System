#include <iostream>
using namespace std;

int main()
{
    int choice;
    int vehicleCount = 0;

    do
    {
        cout << "\n--- Smart Traffic Control System ---\n";
        cout << "1. Enter Traffic Data\n";
        cout << "2. View Signal Status\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of vehicles on the lane: ";
                cin >> vehicleCount;
                break;

            case 2:
                if(vehicleCount == 0)
                {
                    cout << "No traffic data available.\n";
                }
                else if(vehicleCount < 10)
                {
                    cout << "Normal Green Signal (30 seconds)\n";
                }
                else if(vehicleCount >= 10 && vehicleCount < 20)
                {
                    cout << "Green Signal Extended (45 seconds)\n";
                }
                else
                {
                    cout << "Heavy Traffic - Green Signal Extended (60 seconds)\n";
                }
                break;

            case 3:
                cout << "Exiting system...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}