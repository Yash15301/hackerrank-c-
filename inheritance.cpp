#include<cmath>
#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Triangle
{
    public:
        void triangle()
        {
            cout << "I am a triangle"<<endl;
        }
};

class Isosceles: public Triangle
{
    public:
        void isosceles()
        {
            cout << "I am an isosceles triangle"<<endl;
        }
        void defination()
        {
            cout << "In an isosceles triangle two sides are equal"<<endl;
        }
};
int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.defination();
    isc.triangle();
    return 0;
}