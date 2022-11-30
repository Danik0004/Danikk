#include<iostream>
using namespace std;

struct menu{
    int Burgers, Drinks, Pizzas, Sauces;
};
struct Burgers{
    int a = 2300, b = 2000, c = 1000;
};
struct Drinks{
    int d = 550, e = 400, f = 400, g = 400, h = 400, i = 250;
}; 
struct Pizzas{
    int j = 1900, k = 1700, l = 2200, m = 2000;
};
struct Sauces{
    int n = 150, o = 150, p = 150;
};

int main(){

    menu a1;
    Burgers a2;
    Drinks a3;
    Pizzas a4;
    Sauces a5;
    
    int n1,n2,n3,n4,n5;
    int wasd;
    
    while (true) {
    cout << "Menu:" << endl;
    cout << "1. Burgers" << endl;
    cout << "2. Drinks" << endl;
    cout << "3. Pizzas" << endl;
    cout << "4. Sauces" << endl;
    
    cout << "What do you want: ";
    cin >> n1;
    
    if(n1 == 1){
        cout << "Burgers:" << endl;
        cout << "1.Cheeseburger beef:    " << a2.a <<endl;
        cout << "2.Cheeseburger chicken: " << a2.b <<endl;
        cout << "3.Special Burger:       " << a2.c <<endl;
        
        cout << "What kind of burger would you like: ";
        cin >> n2;
        if(n2 == 1){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n2 == 2){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n2 == 3){
                cout << "Thanks for the purchase!!!" << endl;
        }

    }
    if(n1 == 2){
        cout << "Drinks:" << endl;
        cout << "1.Coca-cola 1 :   " << a3.d << endl;
        cout << "2.Coca-cola 0.5 : " << a3.e << endl;
        cout << "3.Sprite 0.5 :    " << a3.f << endl;
        cout << "4.Fuse tea 0.5 :  " << a3.g << endl;
        cout << "5.Fanta 0.5 :     " << a3.h << endl;
        cout << "6.Bonaqua 0.5 :   " << a3.i << endl;
        
        cout << "What kind of drinks would you like: ";
        cin >> n3;
        
        if(n3 == 1){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n3 == 2){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n3 == 3){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n3 == 4){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n3 == 5){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n3 == 6){
                cout << "Thanks for the purchase!!!" << endl;
        }
    }
    if(n1 == 3){
        cout << "Pizzas:" << endl;
        cout << "1.Pepperoni: " << a4.j << endl;
        cout << "2.Margaret:  " << a4.k << endl;
        cout << "3.Mexicano:  " << a4.l << endl;
        cout << "4.Pollo:     " << a4.m << endl;
        
        cout << "What kind of pizzas would you like: ";
        cin >> n4;
        
        if(n4 == 1){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n4 == 2){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n4 == 3){
                cout << "Thanks for the purchase!!!" << endl;
        }  
        if(n4 == 4){
                cout << "Thanks for the purchase!!!" << endl;
        }        
    }
    if(n1 == 4){
        cout << "Sauces:" << endl;
        cout << "1.Barbecue: " << a5.n << endl;
        cout << "2.Ketchup:  " << a5.o << endl;
        cout << "3.Cheeese:  " << a5.p << endl;
        
        cout << "What kind of sauces would you like: ";
        cin >> n5;
        
        if(n5 == 1){
                cout << "Thanks for the purchase!!!" << endl;
        } 
        if(n5 == 2){
                cout << "Thanks for the purchase!!!" << endl;
        }
        if(n5 == 3){
                cout << "Thanks for the purchase!!!" << endl;
        }        
    }
    int sum = 0;
    if (n2 == 1){
        sum += 2300;
    }
    if (n2 == 2){
        sum += a2.b;
    }
    if (n2 == 3){
        sum += a2.c;
    }
    if (n3 == 1){
        sum += a3.d;
    }
    if (n3 == 2){
        sum += a3.e;
    }
    if (n3 == 3){
        sum += a3.f;
    }
    if (n3 == 4){
        sum += a3.g;
    }
    if (n3 == 5){
        sum += a3.h;
    }
    if (n3 == 6){
        sum += a3.i;
    }
    if (n4 == 1){
        sum += a4.j;
    }
    if (n4 == 2){
        sum += a4.k;
    }
    if (n4 == 3){
        sum += a4.l;
    }
    if (n4 == 4){
        sum += a4.m;
    }
    if (n5 == 1){
        sum += a5.n;
    }
    if (n5 == 2){
        sum += a5.o;
    }
    if (n5 == 3){
        sum += a5.p;
    }
    int pr = 0;
    pr += sum;
    
    cout << "Do you want something else?" << endl;
    cout << "1.Yes" << endl;
    cout << "2.No" << endl;
    cin >> wasd;
    if (wasd == 1) {
        continue;
        cout << "Total: " << pr << endl;
    }
    if (wasd == 2) {
    cout << "Total: " << sum << endl;
    break;
    }
        
    }
    
 }
