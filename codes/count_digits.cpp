#include <iostream>
using namespace std;

int count_digits(int num){
    int count = 0;
    
    if (0 <= num  && num < 10 ){
        return 1;
    }
    else{
        num = num/10;
        return count_digits(num) + 1;
    
    }
    
} 

int main(int argc, char *argv[]){
    cout << argv[1] << endl;
    cout << count_digits(atoi(argv[1])) << endl;
}