#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cout << "Enter numbe rof inputs: ";
    cin >> n;
    int number[n];
    for (int i=0; i<n; i++)
    {
        cin >> number[i];
    } 
    
    for(int i=n-1; i>=0; i--)
    {
        cout << number[i] << " ";
    }
    return 0;
}
