#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //constants for menu choices
    const int ADULT_CHOICE =1, CHILD_CHOICE =2, SENIOR_CHOICCE = 3, QUIT_CHOICE = 4;

    //constants for membership rates
    const double ADULT = 40.0, CHILD = 20.0, SENIOR = 30.0;

    //vars
    int choice, months;
    double charges;

    //setup # output format
    cout << fixed << showpoint << setprecision(2);

    do{
        //display the menu.
        cout << "\n\t\t Health Club Membership Menu\n\n"
            << "1, Standard Adult Membership\n"
            << "2. Child Membership\n"
            << "3. Senior Citizen Membership\n"
            << "4. Quit the Program \n\n"
            << "Enter your choice: ";
        cin >> choice;

        //validate seleciton
        while (choice <ADULT_CHOICE || choice > QUIT_CHOICE)
        {
             cout << "Please enter a valid menu choice: ";
             cin >> choice;
        }
        //process user's choice
        if (choice != QUIT_CHOICE){
        //get the number of monthsw.
        cout << "For how many months? ";
        cin >> months;

        //respond to the users selection
        switch (choice){
    case ADULT_CHOICE:
        charges = months * ADULT;
        break;
    case CHILD_CHOICE:
        charges = months * CHILD;
        break;
    case SENIOR_CHOICCE:
        charges = months * SENIOR;
        }
    cout << "The total charges are $" << charges << endl;
    }
    }while (choice != QUIT_CHOICE);
    return 0;
}
