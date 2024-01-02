/*A new fruit juice machine has been purchased for the cafeteria, and a program is needed
to make the machine function properly. The machine dispenses apple juice, orange
juice, mango lassi, and fruit punch in recyclable containers. In this programming
example, we write a program for the fruit juice machine so that it can be put into
operation.
The program should do the following:
1. Show the customer the different products sold by the juice machine.
2. Let the customer make the selection.
3. Show the customer the cost of the item selected.
4. Accept money from the customer.
5. Release the item.
Input - The item selection and the cost of the item.
Output - The selected item.*/

#include <string>
#include <iostream>

class cashRegister
{
    public:
    int getCurrentBalance() const;
    void acceptAmount(int amountIn);
    cashRegister(); //default constructor
    cashRegister(int cashIn);   //constructor with parameters

    private:
    int cashOnHand;     //variable to store the cash in the register
};

int cashRegister::getCurrentBalance() const
{
    return cashOnHand;
}

void cashRegister::acceptAmount(int amountIn)
{
    cashOnHand = cashOnHand + amountIn;     //cashOnHand += amountIn
}

cashRegister::cashRegister()
{
    cashOnHand = 500;
}

cashRegister::cashRegister(int cashIn)
{
    if(cashIn >= 0)
    cashOnHand = cashIn;
    else
    cashOnHand = 500;
}

class dispencerType
{
    public:
    int getNoOfItems() const;
    int getCost() const;
    void makeSale();
    dispencerType();
    dispencerType(int setNoOfItems, int setCost);

    private:
    int numberOfItems;
    int cost;
};

int dispencerType::getNoOfItems() const
{
    return numberOfItems;
}

int dispencerType::getCost() const
{
    return cost;
}

void dispencerType::makeSale()
{
    numberOfItems--;
}

dispencerType::dispencerType()
{
    numberOfItems = 50;
    cost = 50;
}

dispencerType::dispencerType(int setNoOfItems, int setCost)
{
    if(setNoOfItems >= 0)
    numberOfItems = setNoOfItems;
    else
    numberOfItems = 50;

    if(setCost >= 0)
    cost = setCost;
    else
    cost = 50;
}

void showSelection()
{
    std::cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << std::endl;
    std::cout << "To select an item, enter " << std::endl;
    std::cout << "1 for apple juice" << std::endl;
    std::cout << "2 for orange juice" << std::endl;
    std::cout << "3 for mango lassi" << std::endl;
    std::cout << "4 for fruit punch" << std::endl;
    std::cout << "9 to exit" << std::endl;
}       //end showSelection

void sellProduct(dispencerType& product, cashRegister& pCounter)
{
    int amount;     //variable to hold the amount entered
    int amount2;    //variable to hold the extra amount needed

    if(product.getNoOfItems() > 0)  //if the dispencer is not empty
    {
        std::cout<<"Please Deposit "<<product.getCost()<< " cents"<<std::endl;
        std::cin>>amount;

        if(amount < product.getCost())
        {
            std::cout<<"Please deposit another "<<product.getCost() - amount<<" cents"<<std::endl;
            std::cin>>amount2;
            amount = amount + amount2;
        } 

        if(amount >= product.getCost())
        {
            pCounter.acceptAmount(amount);
            product.makeSale();
            std::cout<<"Collect your item at the bottom  and enjoy."<< std::endl;
        }
        else
        {
            std::cout<<"This amount is not enough. "<<"Collect what you deposited."<<std::endl;
        }
        std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<< std::endl << std::endl;
    }
    else
    std::cout << "Sorry, this item is sold out." << std::endl;
}

int main()
{
    cashRegister counter;
    dispencerType appleJuice(100, 50);
    dispencerType orangeJuice(100, 65);
    dispencerType mangoLassi(75, 45);
    dispencerType fruitPunch(100, 85);

    int choice; //variable to hold the selection

    showSelection();
    std::cin>>choice;

    while(choice != 9)
    {
        switch(choice)
        {
            case 1:
            sellProduct(appleJuice, counter);
            break;

            case 2:
            sellProduct(orangeJuice, counter);
            break;

            case 3:
            sellProduct(mangoLassi, counter);
            break;

            case 4:
            sellProduct(fruitPunch, counter);
            break;

            default:
            std::cout<< "Invalid Selection."<< std::endl;
        }
        showSelection();
        std::cin>>choice;
    }
    return 0;
}