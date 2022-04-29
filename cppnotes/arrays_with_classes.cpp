#include <iostream>
using namespace std;
class shop
{ // private
    int itemId[100];
    int itemPrice[100];
    int counter;

public: // public
    void initcounter(void)
    {
        counter = 1;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{ //  adding items with their price range.
    cout << "Enter Id of your item no " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{ // displays all the items which added using setPrice function.
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId << " is " << itemPrice << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();     // adding first item.
    dukaan.setPrice();     // adding second item.
    dukaan.setPrice();     // adding third item.
    dukaan.displayPrice(); // displays all the items added.
}