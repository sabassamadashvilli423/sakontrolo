#include <iostream>
#include <sstream>
using namespace std;
void stringToInt(string s) {
    stringstream geek(s);
    int x = 0;
    geek >> x;
    cout << x;
}
int main()
{
    string s ;
    cin >> s;
    stringToInt(s);

}