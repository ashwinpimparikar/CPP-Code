#include<iostream>

using namespace std;

class Test
{
    private:
       int a,b;
    public: 
       Test(){}
       Test(int x, int y)
       {
           a = x;
           b = y;
       }
       void display()
       {
           cout << "a = " << a << "\nb = " << b << "\n"; 
       }
       Test operator+(Test obj)
       {
           Test tmp;
           tmp.a = a + obj.a;
           tmp.b = b + obj.b;
           return tmp;
       }
};

int main()
{
    Test obj1(5,4);
    obj1.display();
    Test obj2(5,6);
    obj2.display();
    Test obj3;
    obj3 = obj1+obj2;
    obj3.display();
}
