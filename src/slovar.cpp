#include "slovar.h"
#include <fstream>
#include <sstream>
#include <iterator>
#include <iostream>


using namespace std;

void slovar::create_new(){
    cout << "New empty slovar was created";
}

void slovar::read_from_file(){

    ifstream ifs("text.txt");

    if(ifs)
    {
        string s(istreambuf_iterator<char>(ifs.rdbuf()), istreambuf_iterator<char>());
        for(string::iterator it = s.begin(); it != s.end(); ++it)
        {
            if(!isalpha(*it))
            {
                *it = ' ';
            }
            else if(isupper(*it))
            {
                *it = tolower(*it);
            }
        }

        istringstream iss(s);

        while(iss >> s)
        {
            ++dictionary[s];
        }
    }
    else
    {
        std::cerr << "File not found\n";
    }
    ifs.close();

    int i1;
}

void slovar::show(){

    for (map<string, int>::const_iterator it = dictionary.begin(); it != dictionary.end(); ++it)
    {
        cout << it->first << ' ' << it->second << endl;
    }
}

void slovar::add() {
    string word;
    cin >> word;
    dictionary.insert (pair<string,int>(word,1));
}

void slovar::find_word() {
    string word_to_search;
    cin >> word_to_search;
    for (map<string, int>::const_iterator it = dictionary.begin(); it != dictionary.end(); ++it){
        if (it->first == word_to_search) {
            cout << it->first << "\t\t" << it->second << std::endl;
            break;
        }
    }
}

void slovar::counter_plus(string word){
    for (map<string, int>::const_iterator it = dictionary.begin(); it != dictionary.end(); ++it){
            if (it->first == word) {
                ++dictionary[word];
                break;
        }
    }
}

