#include <stdexcept>
#include <iostream>
#include <deque>
class TrainComposition
{
    std::deque<int>wagons;
public:
    void attachWagonFromLeft(int wagonId)
    {
        wagons.push_front(wagonId);
    }

    void attachWagonFromRight(int wagonId)
    {
        wagons.push_back(wagonId);
    }

    int detachWagonFromLeft()
    {
        int left =wagons.at(0);
        wagons.pop_front();
        return left;
    }
    

    int detachWagonFromRight()
    {
        int right =wagons.at(wagons.size()-1);
        wagons.pop_back();
        return right;
        
    
    }
};

#ifndef RunTests
int main()
{
    TrainComposition tree;
    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    
    std::cout << tree.detachWagonFromRight() << "\n"; // 7 
    std::cout << tree.detachWagonFromLeft(); // 13
}
#endif
