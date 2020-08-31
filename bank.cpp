#include <iostream>

using namespace std; //std 를 치는건 상당한 노동이다.

int selecting(void);

void one(void);
void two(void);
void three(void);
void four(void);
void five(void);

int main(void){
    
    int option = 0 ;
    while(option != 5){
        selecting();
    }
    return 0;
    
}

int selecting(void){
    int i;
    cout << "-------------------Menu--------------------" <<endl;
    cout << "1. 계좌 개설"<<endl;
    cout << "2. 입금"<<endl;
    cout << "3. 출금"<<endl;
    cout << "4. 계좌 정보"<<endl;
    cout << "5. 프로그램 종료"<<endl;
    cout << "선택 : ";
    cin >> i;
    return i;
}

void one(void){
    
}