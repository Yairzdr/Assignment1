#include <iostream>
#include <fstream>
#include "../include/Session.h"
#include "../include/json.hpp"

using namespace std;
using json = nlohmann::json;

int main(int argc, char** argv){
    if(argc != 2){
        //cout << "usage cTrace <config_path>" << endl;
        std::ifstream i("../config1.json");
        json j;
        j<<i;
        std::cout<<j;
        return 0;
        }
    //Session sess(argv[1]);
    //sess.simulate();
    return 0;
}
