#include <iostream>
using namespace std;

// recursive
int count_digits_recursive(int num){
    int count = 0;
    
    if (0 <= num  && num < 10 ){
        return 1;
    }
    else{
        num = num/10;
        return count_digits_recursive(num) + 1;
    
    }
    
} 

// iterative
int count_digits_iterative(int num){
    int count = 0;
    while (num > 0){
        num = num/10;
        count++;
    }
    return count;
}

int main(int argc, char *argv[]){
    cout << argv[1] << endl;
    cout << count_digits_recursive(atoi(argv[1])) << endl;
    cout << count_digits_iterative(atoi(argv[1])) << endl;
}