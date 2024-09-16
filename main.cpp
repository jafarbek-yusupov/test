#include <iostream>
using namespace std;

void problem1(int a){
    if(a >= 0)   cout << "Positive" << endl;
    else    cout << "Negative" << endl;
}

void problem2(int a){
    if(a >= 0 && a%2==0)   cout << "The number is positive and even" << endl;
    else if(a >= 0 && a%2!=0)   cout << "The number is positive and odd" << endl;
    else if(a < 0 && a%2==0)   cout << "The number is negative and even" << endl;
    else    cout << "The number is negative and odd" << endl;
}

void problem3(){
    int a, b, c;
    cin >> a >> b >> c;
/*    if(a>b && b>c)  cout << a << " is the largest";
    if(b>a && b>c)  cout << a << " is the largest"; */
}

void problem5(int a){
    if(a%4!=0 || (a%100==0 && a%400!=0)){
        cout << a << " is not a leap year" << endl;
    }
    else    cout << a << " is a leap year" << endl;
}

void problem8(){
    char c;
    cin >> c;
    if(c>='A' && c<='Z')  cout << "Uppercase alphabet" << endl;
    else if(c>='a' && c<='z')  cout << "Lowercase alphabet" << endl;
    else    cout << "It is not an alphabet"<< endl;
}

void problem13(){
    int a, b;
    cout << "Enter today's day: ";
    cin >> a;
    cout << "Enter the number of days elapsed since today: ";
    cin >> b;

}

int main() {
    //int x;
    //cin >> x;
    //problem5(x);
    int a, b;
    cin >> a >> b;
    if(a==1)  cout << "Bus" << endl;
    else if(b==1)  cout << "Walk" << endl;
    else  cout << "Bike" << endl;
    return 0;
}
