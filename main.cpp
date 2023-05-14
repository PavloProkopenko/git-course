#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    
public:
    int Age;
    float Weight;
    int Height;
    string Name;
};

int main()
{
    Human User;

    cout << "What is your name?" << endl;
    cin >> User.Name;
    
    cout << "How old are you?" << endl;
    cin >> User.Age;

    cout << "What is your height?" << endl;
    cin >> User.Height;

    cout << "What is you weight?" << endl;
    cin >> User.Weight;

    cout << "Information about you\n\tName\t\tAge\t\tHeight\t\tWeight\t\t" << endl;
    cout << "\t" << User.Name << "\t\t" << User.Age << "\t\t" << User.Height << "\t\t" << User.Weight << endl;
}