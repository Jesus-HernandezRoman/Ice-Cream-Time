//
//  Semaphore.cpp
//  c3315402A2P2
//
//  Created by Jesus Hernandez Roman on 10/9/18.
//  Copyright © 2018 Jesus Hernandez Roman. All rights reserved.
//

#include "Semaphore.hpp"
#include "Customer.hpp"

semaphore::semaphore()
{
    value = 5;
    min = 0;
    max = 0;
}
semaphore::semaphore(int temp)
{
    value = temp;
    min = 0;
    max = 0;
}
int semaphore::get_value()
{
    return value;
}
void semaphore::set_value(int Value)
{
    value = Value;
}
int semaphore::get_min()
{
    return min;
}
void semaphore::set_min(int Min)
{
    min = Min;
}
int semaphore::get_max()
{
    return max;
}
void semaphore::set_max(int Max)
{
    max = Max;
}
void semaphore::semWait(customer a)
{
    value--;
    //if tables available, immediately seated
    if(value >= 0)
    {
        a.set_seats(a.get_arrives());
        a.set_leaves(a.get_arrives()+a.get_eating());
        a.print();
        //in case someone leaves
        //if(a.get_arrives() > min)
            //value++;
    }
    else
    {
        if(a.get_arrives() > max)
            max = a.get_arrives();
        a.set_seats(max);
        a.set_leaves(max+a.get_eating());
        a.print();
    }
}
void semaphore::semSignal()
{
    value ++;
}
