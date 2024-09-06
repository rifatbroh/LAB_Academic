/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
class Shopping_Mall{
    /*
        -> important attribure
        -> important methode function
        -> calculate(by polymorphism)
    */
   public:
   int item, price;
   void calculat(){

   }

};

class First_Floor : public Shopping_Mall{
    public:
    /*
    cout<<"\t1.Frabics Cloths"<<endl;
    cout<<"\t2.School, College, University dress"<<endl;
    cout<<"\t3.Bed & Blanker Store"<<endl<<endl;

    cout<<"\tPlease Choose Category: ";
    int category;
    cin >> category;
    if (category == 1){

    }
    else if(category == 2){

    }
    else if (category == 3){
    
    }
    */

};

class Second_Floor : public Shopping_Mall{
    public:
    /*
    cout<<"\t1.Random Shoes Shop"<<endl;
    cout<<"\t2.Bata"<<endl;
    cout<<"\t3.Apex"<<endl;
    cout<<"\t4.Wakaroo"<<endl<<endl;

    cout<<"\tPlease Choose Category: ";
    int category;
    cin >> category;
    if (category == 1){

    }
    else if(category == 2){

    }
    else if (category == 3){
    
    }
    else if (category == 4){
    
    }
    */

};

class Third_Floor : public Shopping_Mall{
    public:
    /*
    Cout<<"\tFor Men & Women"<<endl;
    cout<<"\t**************"<<endl;
    cout<<"\t1.Gentle Park"<<endl;
    cout<<"\t2.Sailor's"<<endl;
    cout<<"\t3.Easy Fashoin's"<<endl;
    cout<<"t4.Adlib;s"<<endl<<endl;

    cout<<"\tPlease Choose Category: ";
    int category;
    cin >> category;
    if (category == 1){

    }
    else if(category == 2){

    }
    else if (category == 3){
    
    }
    else if (category == 4){
    
    }
    */

};

class Fourth_Floor : public Shopping_Mall{
    public:
    /*
    cout<<"\tHand Set"<<endl;
    cout<<"\t********"<<endl<<endl;
    cout<<"\t1.NoKia"<<endl;
    cout<<"\t2.Symphony"<<endl<<endl;
    cout<<"\tSmart Phone"<<endl;
    cout<<"\t***********"<<endl<<endl;
    cout<<"\t3.Apple"<<endl;
    cout<<"\t4.SAMSUNG"<<endl;
    cout<<"\t5.Redmi MI"<<endl;
    cout<<"\t6.VIVO"<<endl;
    cout<<"t7.One +"<<endl<<endl;
    cout<<"\tComputer"<<endl;
    cout<<"\t********"<<endl<<endl;
    cout<<"\t8.HP (Brand)"<<endl;
    cout<<"\t9.Dell (Brand)"<<endl;
    cout<<"\t10.MackBook Air"<<endl;
    cout<<"\t11.LENOVO"<<endl<<endl;
    cout<<"\tAccessories"<<endl;
    cout<<"\t***********"<<endl<<endl;
    cout<<"\t12.Air Buds"<<endl;
    cout<<"\t13.Head Set"<<endl;

    cout<<"\tPlease Choose Category: ";
    int category;
    cin >> category;
    if (category == 1){

    }
    else if(category == 2){

    }
    else if (category == 3){
    
    }
    else if (category == 4){
    
    }
    else if (category == 5){
    
    }
    else if (category == 6){
    
    }
    else if (category == 7){
    
    }
    else if (category == 8){
    
    }
    else if (category == 9){
    
    }
    else if (category == 10){
    
    }
    else if (category == 11){
    
    }
    else if (category == 12){
    
    }
    else if (category == 13){
    
    }
    */

};

class Fifth_Floor : public Shopping_Mall{
    public:
    /*
    cout<<"\tFast Food"<<endl;
    cout<<"\t*********"<<endl<<endl;
    cout<<"\t1.Murog Pollaow"<<endl;
    cout<<"\t2.Muttun Kacchi"<<endl;
    cout<<"\t3.Burger"<<endl;
    cout<<"\t4.Momos"<<endl;
    cout<<"\t5.Chowmin"<endl<<endl;
    cout<<"\tJucy Item"<<endl;
    cout<<"\t*********"<<endl<<endl;
    cout<<"\t6.Lemon Juce"<<endl;
    cout<<"\t6.Mango Juce"<<endl;
    cout<<"\t8.Orange Juce"<<endl<<endl;

    cout<<"\tPlease Choose Category: ";
    int category;
    cin >> category;
    if (category == 1){

    }
    else if(category == 2){

    }
    else if (category == 3){
    
    }
    else if (category == 4){
    
    }
    else if (category == 5){
    
    }
    else if (category == 6){
    
    }
    else if (category == 7){
    
    }
    else if (category == 8){
    
    }
    */

};

class Sixth_Floor : public Shopping_Mall{
    public:
    /*
    Cout<<"\tTop Ten Tailors"<<endl;
    cout<<"\tRaymond Tailors"<<endl;
    cout<<"\tSailor's Tailors"<<endl<<endl;

        cout<<"\tPlease Choose Category: ";
    int category;
    cin >> category;
    if (category == 1){

    }
    else if(category == 2){

    }
    else if (category == 3){
    
    }
    */

};

class Seventh_Floor : public Shopping_Mall{
    public:
        //cout<<"Comming Soon !"<<endl;

};
int main()
{
    // Object of Class
    Shopping_Mall market;
    First_Floor fst;
    Second_Floor snd;
    Third_Floor thrd;
    Fourth_Floor frth;
    Fifth_Floor fth;
    Sixth_Floor sth;
    Seventh_Floor svth;
    
    // Details about shopping complex
    cout<<endl<< "\tWellcome To Bhai Bhai Shopping Complex"<<endl;
    cout<<"\t======================================"<<endl<<endl;
    cout<<"\t1st Floor: Random cloths Store"<<endl;
    cout<<"\t2nd Floor: Shoes & Kids Collection"<<endl;
    cout<<"\t3rd Floor: Men's & Women's Collection"<<endl;
    cout<<"\t4th Floor: Mobile & Accessories Shop"<<endl;
    cout<<"\t5th Floor: Fast Food & Restura"<<endl;
    cout <<"\t6th Floor: Tailors and Swing"<<endl;
    cout<<"\t7th Floor: Under Construction"<<endl<<endl;

    // Choosing floor for shopping
    while(true)
    {
        int choose_floor;
        cout<<"\tEnter Floor Number: ";
        cin >> choose_floor;

        if (choose_floor == 1){
            cout<<"\t1st Floor: Random cloths Store"<<endl; 
            int item;
            cin >> item;
            
        }
        else if (choose_floor == 2){
            cout<<"\t2nd Floor: Shoes & Kids Collection"<<endl;
        }
        else if (choose_floor == 3){
            cout<<"\t3rd Floor: Men's & Women's Collection"<<endl;
        }
        else if (choose_floor == 4){
            cout<<"\t4th Floor: Mobile & Accessories Shop"<<endl;
        }
        else if (choose_floor == 5){
            cout<<"\t5th Floor: Fast Food & Restura"<<endl;
        }
        else if (choose_floor == 6){
            cout <<"\t6th Floor: Tailors and Swing"<<endl;
        }
        else if (choose_floor == 7){
            cout<<"\t7th Floor: Under Construction"<<endl<<endl;
        }
        else{
            // Terminate the program
            break;
        }
    }
    return 0;
}