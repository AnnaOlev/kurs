#ifndef SLOVAR_H
#define SLOVAR_H

#include <map>
#include <string>
#include <iostream>

using namespace std;

class slovar
{
    public:
    map<string,int> dictionary;

    slovar(int type) {
        if (type == 1)
            create_new();
        else if (type == 2)
            read_from_file();
        else
            cout << "Something wrong\n";
    }

    void create_new();
    void read_from_file();
    void find_word();
    void counter_plus(string word);
    //void save(); указала наличие функции записи в файл для наглядности, возможно у не будет другое название
    void add();
    void show();
};

#endif // SLOVAR_H
