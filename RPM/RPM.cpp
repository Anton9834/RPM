// C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Bank_client
{

private:
    string name_client, name_bank;
    int sum;

public:

    void set(string name_client, string name_bank, int sum) {

        this->name_client = name_client;
        this->name_bank = name_bank;
        this->sum = sum;

    }

    void get() {

        cout << "Клиент " << name_client << " сделал вклад в " << name_bank << " на сумму " << sum << " рублей" << endl;
        cout << endl;
    }

};

class Bank_account
{
private:

    int number_account;
    string operation;
    
public:

    void set(int number_account, string operation) {

        this->number_account = number_account;
        this->operation = operation;
       

    }

    void get() {

        cout << "Банковский счёт № " << number_account << " был " << operation << endl;
        cout << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Bank_client S, V;
    S.set("Петров Иван Васильевич", "ВТБ", 250000);
    S.get();

    V.set("Кононов Артём Сергеевич", "Открытие", 150000);
    V.get();

    Bank_account O, C;
    O.set(597216,"открыт");
    O.get();

    C.set(756142,"закрыт");
    C.get();


}

