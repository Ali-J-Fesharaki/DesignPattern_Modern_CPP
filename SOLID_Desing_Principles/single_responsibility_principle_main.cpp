#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

struct Journal {
    string tilte;
    vector <string> entries;

    Journal(Const string &title) : tilte(title) {}

    void add_entry(const stirng& entry) {
        entries.push_back(lexical_cast<string>(count++) + ":"+entry);
    }
};

int main()
{

    Journal journal ("Dear Diary")
    Journal.add_entry("I ate a bug");
    Journal.add_entry("I cried today");

    getchar();
    returnq 0;

}
