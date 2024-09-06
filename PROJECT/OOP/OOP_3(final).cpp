/*
    OOP_Project (Shopping complex)
    contribute by : 
        -> Shanto Ahmed
        -> Tasfia Jannat
        -> Rayhan Islam Prome
        -> Rifat Hossain
    Hand Over by :
        -> Mousumi Hasan Mukti 
           Assistant professor, BAIUST
    Github publish:
        -> 06,09,2024 (rifatbroh);

*/

#include<bits/stdc++.h>
using namespace std;

class ShoppingMall {
public:
    virtual void displayOptions();
    virtual int calculatePrice(int category, int quantity);
};

class FirstFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\t1. Fabrics Cloths" << endl;
        cout << "\t2. School, College, University dress" << endl;
        cout << "\t3. Bed & Blanket Store" << endl << endl;
    }

    int calculatePrice(int category, int quantity) override {
        int price = 0;
        switch(category) {
            case 1: price = 500; break;
            case 2: price = 300; break;
            case 3: price = 700; break;
            default: cout << "\tInvalid category" << endl; return 0;
        }
        return price * quantity;
    }
};

class SecondFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\t1. Random Shoes Shop" << endl;
        cout << "\t2. Bata" << endl;
        cout << "\t3. Apex" << endl;
        cout << "\t4. Wakaroo" << endl << endl;
    }

    int calculatePrice(int category, int quantity) override {
        int price = 0;
        switch(category) {
            case 1: price = 1200; break;
            case 2: price = 1500; break;
            case 3: price = 2000; break;
            case 4: price = 1000; break;
            default: cout << "\tInvalid category" << endl; return 0;
        }
        return price * quantity;
    }
};

class ThirdFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\t1. Gentle Park" << endl;
        cout << "\t2. Sailor's" << endl;
        cout << "\t3. Easy Fashion's" << endl;
        cout << "\t4. Adlib's" << endl << endl;
    }

    int calculatePrice(int category, int quantity) override {
        int price = 0;
        switch(category) {
            case 1: price = 1500; break;
            case 2: price = 1800; break;
            case 3: price = 2000; break;
            case 4: price = 2500; break;
            default: cout << "\tInvalid category" << endl; return 0;
        }
        return price * quantity;
    }
};

class FourthFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\t1. Nokia" << endl;
        cout << "\t2. Symphony" << endl;
        cout << "\t3. Apple" << endl;
        cout << "\t4. SAMSUNG" << endl;
        cout << "\t5. Redmi MI" << endl;
        cout << "\t6. VIVO" << endl;
        cout << "\t7. One+" << endl;
        cout << "\t8. HP (Brand)" << endl;
        cout << "\t9. Dell (Brand)" << endl;
        cout << "\t10. MacBook Air" << endl;
        cout << "\t11. LENOVO" << endl;
        cout << "\t12. Air Buds" << endl;
        cout << "\t13. Head Set" << endl << endl;
    }

    int calculatePrice(int category, int quantity) override {
        int price = 0;
        switch(category) {
            case 1: price = 3000; break;
            case 2: price = 3500; break;
            case 3: price = 70000; break;
            case 4: price = 50000; break;
            case 5: price = 15000; break;
            case 6: price = 20000; break;
            case 7: price = 25000; break;
            case 8: price = 60000; break;
            case 9: price = 55000; break;
            case 10: price = 90000; break;
            case 11: price = 50000; break;
            case 12: price = 3000; break;
            case 13: price = 2000; break;
            default: cout << "\tInvalid category" << endl; return 0;
        }
        return price * quantity;
    }
};

class FifthFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\t1. Murog Polao" << endl;
        cout << "\t2. Mutton Kacchi" << endl;
        cout << "\t3. Burger" << endl;
        cout << "\t4. Momos" << endl;
        cout << "\t5. Chowmein" << endl;
        cout << "\t6. Lemon Juice" << endl;
        cout << "\t7. Mango Juice" << endl;
        cout << "\t8. Orange Juice" << endl << endl;
    }

    int calculatePrice(int category, int quantity) override {
        int price = 0;
        switch(category) {
            case 1: price = 150; break;
            case 2: price = 200; break;
            case 3: price = 100; break;
            case 4: price = 80; break;
            case 5: price = 120; break;
            case 6: price = 50; break;
            case 7: price = 60; break;
            case 8: price = 70; break;
            default: cout << "\tInvalid category" << endl; return 0;
        }
        return price * quantity;
    }
};

class SixthFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\t1. Top Ten Tailors" << endl;
        cout << "\t2. Raymond Tailors" << endl;
        cout << "\t3. Sailor's Tailors" << endl << endl;
    }

    int calculatePrice(int category, int quantity) override {
        int price = 0;
        switch(category) {
            case 1: price = 500; break;
            case 2: price = 700; break;
            case 3: price = 600; break;
            default: cout << "\tInvalid category" << endl; return 0;
        }
        return price * quantity;
    }
};

class SeventhFloor : public ShoppingMall {
public:
    void displayOptions() override {
        cout << "\tUNDER_CONSTRUCTION_Coming_Soon!" << endl;
    }

    int calculatePrice(int category, int quantity) override {
        cout << "\tNo items available" << endl;
        return 0;
    }
};
// usser details tracking for future response
bool UserId()
{
    srand(time(0));
    int generateId = rand() % 90000 + 10000; 
    int user;

    cout << "\n\t\t  GRAND OPENING" << endl;
    cout <<"\t\t  -------------" << endl;
    cout << "\tWelcome To Western Shopping Complex" << endl;
    cout << "\t===================================" << endl;

    cout << "\n\tNOTICE:" <<endl;
    cout << "\tFor your kind information, we need your user"<<endl;
    cout << "\tid to track your order summary for future" << endl;
    cout << "\tdevelopment" << endl;

    cout << "\n\tUnique User ID: " << generateId << endl;
    cout << "\tPut Unique ID: ";
    cin >> user;

    return (generateId == user);
}

int main()
{

    if (!UserId()) {
        cout << "\tInvalid User Id.Try again!" << endl;
        return 0;
    }

    // Create objects for each floor
    FirstFloor firstFloor;
    SecondFloor secondFloor;
    ThirdFloor thirdFloor;
    FourthFloor fourthFloor;
    FifthFloor fifthFloor;
    SixthFloor sixthFloor;
    SeventhFloor seventhFloor;

    cout << endl << "\tUser Instruction's for Shopping Complex" << endl;
    cout << "\t=======================================" << endl << endl;
    cout << "\t1st Floor: Random cloths Store" << endl;
    cout << "\t2nd Floor: Shoes & Kids Collection" << endl;
    cout << "\t3rd Floor: Men's & Women's Collection" << endl;
    cout << "\t4th Floor: Mobile & Accessories Shop" << endl;
    cout << "\t5th Floor: Fast Food & Restaurant" << endl;
    cout << "\t6th Floor: Tailors and Swing" << endl;
    cout << "\t7th Floor: Under Construction" << endl << endl;

    int total_price = 0;

    // Choosing floor for shopping
    while (true)
    {
        int choose_floor;
        cout << "\tEnter Floor Number (1-7) or 0 to exit: ";
        cin >> choose_floor;

        if (choose_floor == 1)
        {
            firstFloor.displayOptions();
            int category, quantity;
            cout << "\tPlease Choose Category: ";
            cin >> category;
            cout << "\tEnter Quantity: ";
            cin >> quantity;
            int price = firstFloor.calculatePrice(category, quantity);
            total_price += price;
            cout << "\tTotal Price for this purchase: " << price << endl;
            cout << "\tAlert ! You already spent: " << total_price << endl << endl;
        } 
        else if (choose_floor == 2)
        {
            secondFloor.displayOptions();
            int category, quantity;
            cout << "\tPlease Choose Category: ";
            cin >> category;
            cout << "\tEnter Quantity: ";
            cin >> quantity;
            int price = secondFloor.calculatePrice(category, quantity);
            total_price += price;
            cout << "\tTotal Price for this purchase: " << price << endl;
            cout << "\tAlert ! You already spent: " << total_price << endl << endl;
        } 
        else if (choose_floor == 3)
        {
            thirdFloor.displayOptions();
            int category, quantity;
            cout << "\tPlease Choose Category: ";
            cin >> category;
            cout << "\tEnter Quantity: ";
            cin >> quantity;
            int price = thirdFloor.calculatePrice(category, quantity);
            total_price += price;
            cout << "\tTotal Price for this purchase: " << price << endl;
            cout << "\tAlert ! You already spent: " << total_price << endl << endl;
        } 
        else if (choose_floor == 4)
        {
            fourthFloor.displayOptions();
            int category, quantity;
            cout << "\tPlease Choose Category: ";
            cin >> category;
            cout << "\tEnter Quantity: ";
            cin >> quantity;
            int price = fourthFloor.calculatePrice(category, quantity);
            total_price += price;
            cout << "\tTotal Price for this purchase: " << price << endl;
            cout << "\tAlert ! You already spent: " << total_price << endl << endl;
        } 
        else if (choose_floor == 5)
        {
            fifthFloor.displayOptions();
            int category, quantity;
            cout << "\tPlease Choose Category: ";
            cin >> category;
            cout << "\tEnter Quantity: ";
            cin >> quantity;
            int price = fifthFloor.calculatePrice(category, quantity);
            total_price += price;
            cout << "\tTotal Price for this purchase: " << price << endl;
            cout << "\tAlert ! You already spent: " << total_price << endl << endl;
        } 
        else if (choose_floor == 6)
        {
            sixthFloor.displayOptions();
            int category, quantity;
            cout << "\tPlease Choose Category: ";
            cin >> category;
            cout << "\tEnter Quantity: ";
            cin >> quantity;
            int price = sixthFloor.calculatePrice(category, quantity);
            total_price += price;
            cout << "\tTotal Price for this purchase: " << price << endl;
            cout << "\tAlert ! You already spent: " << total_price << endl << endl;
        } 
        else if (choose_floor == 7)
        {
            seventhFloor.displayOptions();
        } 
        else if (choose_floor == 0)
        {
            // calculate final price before output
            cout << "\tFinal Total Price: " << total_price << endl << endl;

            if (total_price > 10000) 
            {
                // 10% reduce
                double discount = total_price * 0.10;
                total_price -= discount;
                
                cout << "\tHurrah! You Got Discount." << endl;
                cout << "\t************************" << endl;
                cout << "\t10% discount applied! Discount Amount: " << discount << endl;
                cout << "\tTotal Price after discount: " << total_price << endl;
            }
            break;
        } 
        else
            cout << "\tInvalid floor number" << endl;
    }

    return 0;
}