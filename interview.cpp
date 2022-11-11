/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<map>
#include<string>
using namespace std;



//pizza details
class pizza
{
    private:
        bool pb_reg, pb_ww,ps_ms,ps_ps, mz_cheese,cd_cheese,spinach,corn,mushroom,chicken,pepperoni;
    
    public:
    
        void def_pizza_base(string base)
        {
            if(base == "whole wheat")
                pb_ww = 1;
            else
                pb_reg = 1;
        }
        
        void def_pizza_sauce(string Sauce)
        {
            if(Sauce == "Marinara sauce")
                ps_ms = 1;
            else
                ps_ps = 1;
        }
        
        void add_mz_cheese()
        {
            mz_cheese = 1;
        }
        
        void add_cd_cheese()
        {
            cd_cheese=1;
        }
        
        bool mz_cheese_selected()
        {
            return mz_cheese;
        }
        
        string p_base()
        {
            if(pb_ww)
                return "whole_wheat";
            else if(pb_reg)
                return "regular";
        }
};

class drinks{
    private:
        bool pepsi,seven_up,coke;
    
    public:
        void add_coke()
        {
            coke = 0;
        }
        
        bool check_drinks_ordered()
        {
            if( pepsi || seven_up || coke)
                return 1;
            else
                return 0;
        }
};

class desserts{
    
    private:
        bool lava_cake,chocolate_brownies;

    public:
        void add_lava_cake()
        {
            lava_cake = 0;
        }
        
        bool check_desserts_ordered()
        {
            if(lava_cake || chocolate_brownies)
                return 1;
            else
                return 0;
        }
};

class promotions
{
    private:
        int reduced_amt;
    public:
        int chck_drink_n_dessert_selected(int amount)
        {
            drinks d1;
            desserts d2;
            if(d1.check_drinks_ordered() && d2.check_desserts_ordered())
                reduced_amt = amount*0.05;
            else
                reduced_amt = 0;
            
            return reduced_amt;
        }
};

//calculate the cost
class bill
{
    private:
        int bill_amt;
        map<string,int> pizza_base;
        map<string,int> topping_choice;
        map<string,int> drinks_choice;
        map<string,int> desserts_choice;

    public:
        
        pizza p1;
        promotions p2;
        
        //constructor to initialise values
        bill()
        {
            pizza_base["whole_wheat"] = 75;
            pizza_base["regular"] = 50;
            
            topping_choice["mz_cheese"] = 30;
     /*       topping_choice[cd_cheese] = 35;
            topping_choice[spinach] = 20;
            topping_choice[corn] = 15;
            topping_choice[mushroom] = 15;
            topping_choice[chicken] = 50;
            topping_choice[pepperoni] = 45;
            */
            drinks_choice["pepsi"]=17;
            drinks_choice["seven_up"]=19;
            
            desserts_choice["lava_cake"]=95;
        }
        
        int bill_amount()
        {
            string pb = p1.p_base();
            bill_amt = pizza_base[pb] + topping_choice["mz_cheese"];
            int discount = p2.chck_drink_n_dessert_selected(bill_amt);
            
            bill_amt = bill_amt - discount;
            
            return bill_amt;
        }
};


int main()
{
    string pizza_base,sauce,ans,topping_choice,drinks_n_desert_choice;
    pizza p1;
    bill b1;
    
    cout<<"\nSelect pizza base:";
    cout<<"\n1. Regular";
    cout<<"\n2. whole wheat";
    cin>>pizza_base;
    
    p1.def_pizza_base(pizza_base);
    
    cout<<"\nSelect the sauce:";
    cout<<"\n1. Marinara Sauce";
    cout<<"\n2.Pesto sauce";
    cin>>sauce;
    p1.def_pizza_sauce(sauce);
    
    do{
    cout<<"\nDo you want to add toppings?(Y/N)";
    cin>>ans;
    }
    while(ans == "n" || ans == "N");
    
    if(ans == "y" || ans == "Y")
    {
        cout<<"\n1. Mozzarella Cheese";
        cout<<"\n2. Cheddar cheese";
        cout<<"\n3. Spinach";
        cout<<"\nEnter choice:";
        cin>>topping_choice;
        p1.add_cd_cheese();
        p1.add_mz_cheese();
    }
    
    else{
        cout<<"\nPlease select atleast one topping";
    }
    
    cout<<"\nDo you want to add drinks or desserts and get extra discount?(Y/N)";
    cin>>ans;
    
    if(ans == "y" || ans == "Y")
    {
        cout<<"\n1. Pepsi";
        cout<<"\n2.coke";
        
        cout<<"\nEnter choice:";
        cin>>drinks_n_desert_choice;
        
    }
    
    int amount = b1.bill_amount();
    cout<<"\nAmount to be paid "<<amount<<" Rs.";
    return 0;
}
