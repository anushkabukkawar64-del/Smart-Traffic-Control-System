#include <iostream>
using namespace std;

int main() {
    int choice;
    int lane1, lane2, lane3;

    do {
        cout << "\n--- Smart Traffic Control System ---\n";
        cout << "1. Enter Traffic Data\n";
        cout << "2. View Signal Status\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "\nEnter vehicles in Lane 1: ";
                cin >> lane1;
                cout << "Enter vehicles in Lane 2: ";
                cin >> lane2;
                cout << "Enter vehicles in Lane 3: ";
                cin >> lane3;
                break;

            case 2:
                cout << "\n--- Signal Status ---\n";

                // Lane 1
                if(lane1 > 40)
                    cout << "Lane 1: Green Extended (60 sec)\n";
                else if(lane1 > 20)
                    cout << "Lane 1: Normal Green (40 sec)\n";
                else
                    cout << "Lane 1: Short Green (20 sec)\n";

                // Lane 2
                if(lane2 > 40)
                    cout << "Lane 2: Green Extended (60 sec)\n";
                else if(lane2 > 20)
                    cout << "Lane 2: Normal Green (40 sec)\n";
                else
                    cout << "Lane 2: Short Green (20 sec)\n";

                // Lane 3
                if(lane3 > 40)
                    cout << "Lane 3: Green Extended (60 sec)\n";
                else if(lane3 > 20)
                    cout << "Lane 3: Normal Green (40 sec)\n";
                else
                    cout << "Lane 3: Short Green (20 sec)\n";

                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}
