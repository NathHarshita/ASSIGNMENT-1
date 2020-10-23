#include<iostream>
using namespace std;

class Pets{
    public:
    void Whattodo()
    {cout << "Eat sleep Repeat" << "\n"; }
 };
 class Dogs : public Pets { public:
     void Woff(){
    cout << "Woof! Let's go for a walk Human!!" << "\n";
    } };

int main(){

Dogs o;
o.Woff();
o.Whattodo();
}
