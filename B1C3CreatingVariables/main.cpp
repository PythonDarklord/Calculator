#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    float Number1;
    float Number2;
    string Exit;
    string MathSymbol;

    cout << "Input First Number" << endl;
    cin >> Number1;
    cout << "Input your Math Symbol" << endl;
    cin >> MathSymbol;
    cout << "Input 2nd Number" <<endl;
    cin >> Number2;
    if(MathSymbol == "+"){
        cout << Number1 << " + " << Number2 << " = " << Number1 + Number2 << endl;
    }
    if(MathSymbol == "-"){
        cout << Number1 << " - " << Number2 << " = " << Number1 - Number2 << endl;
    }
    if(MathSymbol == "*"){
        cout << Number1 << " * " << Number2 << " = " << Number1 * Number2 << endl;
    }
    if(MathSymbol == "/"){
        cout << Number1 << " / " << Number2 << " = " << Number1 / Number2 << endl;
    }


    cout << "Type Exit to Leave the program or hit X in the top right" << endl;
    cin >> Exit;
    if(Exit == "Exit"){
           return 0;
    }

}
