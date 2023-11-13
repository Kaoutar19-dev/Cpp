#include<string>
#include<iostream>
using namespace std;
int main() {
    string dh = "010920091123";
    string day = dh.substr(0,2);
    string month = dh.substr(2,2);
    string year = dh.substr(4,4);
    string hour = dh.substr(8,2);
    string min = dh.substr(10,2);

    cout << "Jour : " << day << endl;
    cout << "Mois : " << month << endl;
    cout << "Année : " << year << endl;
    cout << "Heure : " << hour << endl;
    cout << "Minute : " << min << endl;
    return 0;
}