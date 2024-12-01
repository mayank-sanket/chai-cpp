#include<iostream>
// using namespace std;

// creating my own namespace
namespace myChai{
    // using namespace std;
    void display(){
        using namespace std; // can be used here also
        cout<<"hello"<<endl;
    }
}

int main(){
    // cout<<"hello there 1" // won't run because we did not use std namespace in the main function
    // using my own namespace
    myChai::display();
    std::cout<<"hello there 2"<<std::endl;
    std::cout<<"hello there 3"<<std::endl;
    return 0;
}


// qt framework for C++ gives you namespaces for things such as simplification of API, making GUIs, etc
// eigen library for C++ (for mathematics) => ML libraries are heavily dependent on it
// gtest: google (testing)