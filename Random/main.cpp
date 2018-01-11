//random number program

#include <iostream>
#include <cstdlib> // ran and srand functions
#include <ctime> //time function

using namespace std;

int main()
{
    //get sys time
    unsigned seed = time (0);


    //seed random # gen
    srand(seed);

    //intro to user
    cout << "This program will output 20 random numbers...\n";

    //output 20 random #'s
    for (int x = 1; x < 21; x++ ){
    cout << "Random Number  " << x << ": "<< rand() << endl;
    }

    return 0;
}
