#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    string numbers[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a; i<=b; i++)
    {
        if(i<=9)
        {
            cout << numbers[i] << "\n";
        }
        else 
        {
            if(i%2==0)
            {
                cout << "even" << "\n";
            }
            else 
            {
                cout << "odd" << "\n";
            }
        }
    }
    
    return 0;
}