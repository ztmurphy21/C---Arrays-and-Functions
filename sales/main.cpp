#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Three Day Sales Calculation Reporting Tool\n";
   double day1, day2, day3, total;

   //gen the sales from user per day
   cout << "Enter the sales for day 1:";
   cin >> day1;

   cout<< "Enter the sales for day 2:";
   cin >> day2;

   cout << "Enter the sales for day 3:";
   cin >> day3;

   //make calc of total sales
   total = day1+day2+day3;

   //display
   cout << "\nSales Figures\n";
   cout << "--------------\n";
   cout << setprecision(2) << fixed;
   cout << "Day 1: " << setw(8) << day1<< endl;
   cout << "Day 2: " << setw(8) << day2<< endl;
   cout << "Day 3: " << setw(8) << day3<< endl;
   cout << "Total: " << setw(8) << total<< endl;

   cout << "Press any key to exit...";
   _getch();
    return 0;
}
