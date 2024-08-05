#include <iostream>
using namespace std;
int main() {
    // int num = 2;
    // switch(num){
    //     case 1: cout << "First" << endl;
    //         break;

    //     case 2:cout << "Second" << endl;
    //         break;

    //      default: cout << "It is Default case" << endl;
    // }

    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    char op;
    cout << "Choose an operation (1 for multiplication, 2 for division, 3 for addition, 4 for subtraction): ";
    cin >> op;

    switch(op){
        case '*': cout << a * b << endl;
            break;
           
            case '/': cout  << a / b << endl;
                break;
            
            case '+':
                cout  << a + b << endl;
                break;
            
            case '-':
                cout  << a - b << endl;
                break;
           
            default:cout << "Invalid operation" << endl;
    }
}