//
//  main.cpp
//  FunctionTemplates
//
//  Created by Adithya R on 03/10/26.
//

#include <iostream>
#include <string>
using namespace std;
class Player{
public:
    string name;
    int health;
}
#include <string>
using namespace std;
template <typename T>
T myMin(T a , T b){
    if(a < b){
        return a;
    } else{
        return b;
    }
}

template<typename T1 , typename T2>
void func(T1 a , T2 b){
    cout << a << " " << b << endl;
}

int main(){
    cout << myMin<int>(2,3) << endl;
    cout << myMin(2.5, 4.5) << endl;
    Player p1;
    Player p2;
    Player p3 = p2;
}
