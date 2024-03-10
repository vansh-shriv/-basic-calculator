#include<iostream>
using namespace std;\

// hey i started a oode for calculator
int add(int a,int b){
    return (a+b);
}

int subtract(int a,int b){
    return a-b;
}

int multiply(int a,int b){
    return a*b;
}

float divide(float a,float b){
    return (a/b);
}

int remainder(int a,int b){
    return a%b;
}


int main(){
    int a,b;
    char operation;
    cout<<"enter the numbers\n";
    cin>>a>>b;
    cout<<"select the operations you want\n";
    cout<<"the operations are\n";
    cout<<"+\t"<<"-\t"<<"x\t"<<"/\t"<<"%\t"<<"\n";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<"you seletced the sum\n";
        cout<<add(a,b);
        break;
 
    case '-':
        cout<<"you seletced the subtract\n";
        cout<<subtract(a,b);
        break;

    case 'x':
        cout<<"you seletced the multiply\n";
        cout<<multiply(a,b);
        break;

    case '/':
        cout<<"you seletced the divide\n";
        cout<<divide(a,b);
        break;

    case '%':
        cout<<"you seletced the remainder\n";
        cout<<remainder(a,b);
        break;            

    default:
        cout<<"please chose the correct operation\n";
        break;
    }

    return 0;
}
