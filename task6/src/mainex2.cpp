#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
    ifstream in(argv[1],fstream::in);// Abre ficheiro de input
    ofstream out(argv[2],fstream::out);
    vector<std::string> v;
    string s;

    while (getline(in, s)) {
        v.push_back(s);
    }

    sort(v.begin(),v.end());

    in.close();
    for(string str : v){
        out << str << "\n";
    }
}