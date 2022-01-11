#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void printVector(std::vector<std::string> container){
    for(auto itr = container.begin(); itr < container.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

void printReverseVector(std::vector<std::string> container){
    for(auto itr = container.rbegin(); itr < container.rend(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

void printSet(std::set<std::string> tree){
    for(auto itr = tree.begin(); itr != tree.end(); itr++){
        std::cout << *itr << " ";
    }
}

int main(int argc, char**argv) {
    int counter = 0;
    std::ifstream in(argv[1]);
    std::vector<std::string> container;
    std::set<std::string> tree;
    while (true) {
        std::string word;
        in >> word;
        if (word.empty()) break;
        container.push_back(word);
        counter++;
    }
    printVector(container);
    printReverseVector(container);
    std::sort(container.begin(),container.end());
    printVector(container);
    /*
    std::unique(container.begin(),container.end());
    printVector(container);
    */
    for(std::string str : container){
        tree.insert(str);
    }
    printSet(tree);

    return 0;
}

