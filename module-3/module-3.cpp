#include <iostream>
using namespace std;

// Customer Class
class Customer {
public:
    string name;

    void getName() {
        cout << "--------Tops Tech. Fast Food--------\n";
        cout << "Please Enter Your Name: ";
        getline(cin, name);
        cout << "Hello " << name << "\n";
    }
};

// Function to show main menu
void showMainMenu() {
    cout << "\nWhat would you like to order?\n";
    cout << "--------Menu--------\n";
    cout << "1) Pizzas\n";
    cout << "2) Burgers\n";
    cout << "3) Sandwich\n";
    cout << "4) Rolls\n";
    cout << "5) Biryani\n";
    cout << "Please Enter your Choice: ";
}

// Function to show sub-menu and return price
int showSubMenu(int category) {
    int itemChoice, quantity, price = 0;
    string itemName;

    switch (category) {
        case 1:
            cout << "\n1. Margherita Rs.250\n2. Farmhouse Rs.300\n3. Paneer Pizza Rs.280\n";
            cout << "Please Enter which Pizza you would like to have: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 250; itemName = "Margherita"; break;
                case 2: price = 300; itemName = "Farmhouse"; break;
                case 3: price = 280; itemName = "Paneer Pizza"; break;
                default: cout << "Invalid Pizza choice.\n"; return 0;
            }
            break;
        case 2:
            cout << "\n1. Aloo Tikki Burger Rs.90\n2. Cheese Burger Rs.120\n3. Paneer Burger Rs.140\n";
            cout << "Please Enter which Burger you would like to have: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 90; itemName = "Aloo Tikki Burger"; break;
                case 2: price = 120; itemName = "Cheese Burger"; break;
                case 3: price = 140; itemName = "Paneer Burger"; break;
                default: cout << "Invalid Burger choice.\n"; return 0;
            }
            break;
        case 3:
            cout << "\n1. Club Sandwich Rs.240\n2. Veg. Crispy Sandwich Rs.160\n3. Extreme Veg Sandwich Rs.100\n";
            cout << "Please Enter which Sandwich you would like to have: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 240; itemName = "Club Sandwich"; break;
                case 2: price = 160; itemName = "Veg. Crispy Sandwich"; break;
                case 3: price = 100; itemName = "Extreme Veg Sandwich"; break;
                default: cout << "Invalid Sandwich choice.\n"; return 0;
            }
            break;
        case 4:
            cout << "\n1. Veg Roll Rs.100\n2. Cheese Roll Rs.130\n3. Paneer Roll Rs.150\n";
            cout << "Please Enter which Roll you would like to have: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 100; itemName = "Veg Roll"; break;
                case 2: price = 130; itemName = "Cheese Roll"; break;
                case 3: price = 150; itemName = "Paneer Roll"; break;
                default: cout << "Invalid Roll choice.\n"; return 0;
            }
            break;
        case 5:
            cout << "\n1. Veg Biryani Rs.180\n2. Hyderabadi Biryani Rs.220\n3. Paneer Biryani Rs.250\n";
            cout << "Please Enter which Biryani you would like to have: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 180; itemName = "Veg Biryani"; break;
                case 2: price = 220; itemName = "Hyderabadi Biryani"; break;
                case 3: price = 250; itemName = "Paneer Biryani"; break;
                default: cout << "Invalid Biryani choice.\n"; return 0;
            }
            break;
        default:
            cout << "Invalid category.\n";
            return 0;
    }

    cout << "Please Enter Quantity: ";
    cin >> quantity;

    int total = price * quantity;
    cout << "\n--------Your Order--------\n";
    cout << quantity << " x " << itemName << "\n";
    cout << "Your Total Bill is Rs." << total << "\n";
    cout << "Your Order Will be delivered in 40 Minutes\n";
    cout << "Thank you for ordering from Tops Tech Fast Food!\n";

   
}

int main() {
    Customer c;
    c.getName();

    char again;
    do {
        showMainMenu();
        int choice;
        cin >> choice;

        if (!showSubMenu(choice)) {
            cout << "Something went wrong with your selection.\n";
        }

        cout << "\nWould you like to order anything else? (Y/N): ";
        cin >> again;
        cin.ignore(); // To consume newline if needed
    } while (again == 'Y' || again == 'y');

    cout << "Visit Again!\n";
    return 0;
}
