#include <iostream>
#include <vector>

using namespace std;


bool isPalindrome(int x) {
    
    int teste = 0;

    if(x < 0){
        return false;
    } else if(x % 10 == 0 && x != 0){
        return false;
    }

    while(x > teste){
        teste = (teste * 10) + (x % 10);
        x = x / 10;
    }

    return x == teste || x == teste / 10;

}

int main(){
    
    int num;

    for(int i = 0; i < 10; ++i){
        cout << "Digite o numero para o teste: "; cin >> num;
        bool result = isPalindrome(num);
        cout << boolalpha << result << endl;
    }

    return 0;
}