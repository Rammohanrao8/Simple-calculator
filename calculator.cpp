#include<iostream>
using namespace std;

int main(){
    cout << "**********CALCULATOR**********\n";

    char op;
    double num1;
    double num2;
    double result;

    cout << "Enter the Operator (+ - * /) : ";
    cin >> op;

    cout << "Enter the First number : ";
    cin >> num1;

    cout << "Enter the Second number :";
    cin >> num2;

    switch(op){

        case '+':
            result = num1 + num2;
            cout << "Result : " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "result : " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result : " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "result : " << result << endl;
            break;
        default:
            cout <<"Please enter the valid operator(+,-,*,/) and numbers..!" << endl;
            break;
    }


    cout << "******************************";
    return 0;
}