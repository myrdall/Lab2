#include <iostream>
#include "conditions.cpp"

using namespace std;

int main()
{
     setlocale(LC_ALL, "Russian");

     int days, dep_amount;
     
     
    while (dep_amount < 1000)
    {   
        cout << "Минимальная сумма вклада состовляет 1000 рублей \n";
        cout << "Введите сумму вклада:  \n";
        cin >>dep_amount;     
    } 

        cout << "Введите срок вклада: \n";
        cin >>days;

    while (days > 365 ){
        cout << "Срок вклада не может быть более 365 дней\n";
        cout << "Введите срок вклада: \n";  
        cin >>days; 
    }
        
     conditions( days, dep_amount);
}

