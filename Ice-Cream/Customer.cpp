//
//  Customer.cpp
//  c3315402A2P2
//
//  Created by Jesus Hernandez Roman on 10/9/18.
//  Copyright © 2018 Jesus Hernandez Roman. All rights reserved.
//

#include "Customer.hpp"

customer::customer()
{
    id = "";
    arrives = 0;
    seats = 0;
    leaves = 0;
    eating = 0;
}
string customer::get_id()
{
    return id;
}
int customer::get_arrives()
{
    return arrives;
}
int customer::get_seats()
{
    return seats;
}
int customer::get_leaves()
{
    return leaves;
}
int customer::get_eating()
{
    return eating;
}
void customer::set_id(string Id)
{
    id = Id;
}
void customer::set_arrives(int Arrive)
{
    arrives = Arrive;
}
void customer::set_seats(int Seats)
{
    seats = Seats;
}
void customer::set_leaves(int Leaves)
{
    leaves = Leaves;
}
void customer::set_eating(int Eating)
{
    eating = Eating;
}
void customer::print()
{
    cout<<id<<"             "<<arrives<<"         "<<seats<<"         "<<leaves<<endl;
}



