#include <iostream>
using namespace std;

int main() {
    std::cout << "We have an empty bag of marbles."<<std::endl;
    //This program will keep track of the number of marbles in a bag.

    int bagofmarbles = 0;
    //This sets the number of marbles in the bag to 0.
    
    cout << bagofmarbles << " marbles" << endl;
    std::cout << "We add 2 yellow marbles to the bag."<<std::endl;
    //This displays the number of marbles in the bag.

    bagofmarbles = bagofmarbles + 2;
    //This adds 2 marbles to the bag.

    cout << bagofmarbles << " marbles" << endl;
    //This displays the number of marbles in the bag.

    std::cout << "We add 3 blue marbles to the bag."<<std::endl;
    bagofmarbles = bagofmarbles + 3;
    //This adds 3 marbles to the bag.

    cout << bagofmarbles << " marbles" << endl;
    std::cout << "We remove 1 yellow marble from the bag."<<std::endl;

    bagofmarbles = bagofmarbles - 1;
    //This removes 1 marble from the bag.

    cout << bagofmarbles << " marbles" << endl;
    cout << "We started with 0 marbles and now we have " << bagofmarbles << " marbles." << endl;
    //This displays the number of marbles in the bag.
    
    return 0;
}