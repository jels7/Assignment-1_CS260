#include <iostream>
using namespace std;

int main() {
    std::cout << "We have an empty bag of marbles."<<std::endl;
    int bagofmarbles = 0;
    cout << bagofmarbles << " marbles" << endl;
    std::cout << "We add 2 yellow marbles to the bag."<<std::endl;
    bagofmarbles = bagofmarbles + 2;
    cout << bagofmarbles << " marbles" << endl;
    std::cout << "We add 3 blue marbles to the bag."<<std::endl;
    bagofmarbles = bagofmarbles + 3;
    cout << bagofmarbles << " marbles" << endl;
    std::cout << "We remove 1 yellow marble from the bag."<<std::endl;
    bagofmarbles = bagofmarbles - 1;
    cout << bagofmarbles << " marbles" << endl;
    cout << "We started with 0 marbles and now we have " << bagofmarbles << " marbles." << endl;
    return 0;
}