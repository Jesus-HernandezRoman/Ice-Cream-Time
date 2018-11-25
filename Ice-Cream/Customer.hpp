//
//  Customer.hpp
//  c3315402A2P2
//
//  Created by Jesus Hernandez Roman on 10/9/18.
//  Copyright © 2018 Jesus Hernandez Roman. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class customer
{
public:
    customer();
    string get_id();
    int get_arrives();
    int get_seats();
    int get_leaves();
    int get_eating();
    void set_id(string);
    void set_arrives(int);
    void set_seats(int);
    void set_leaves(int);
    void set_eating(int);
    void print();
    
private:
    string id;
    int arrives;
    int seats;
    int leaves;
    int eating;
};

#endif /* Customer_hpp */
