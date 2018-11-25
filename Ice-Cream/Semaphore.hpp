//
//  Semaphore.hpp
//  c3315402A2P2
//
//  Created by Jesus Hernandez Roman on 10/9/18.
//  Copyright © 2018 Jesus Hernandez Roman. All rights reserved.
//

#ifndef Semaphore_hpp
#define Semaphore_hpp

#include <stdio.h>
#include "Customer.hpp"

class semaphore
{
public:
    semaphore();
    semaphore(int); //initialize to a non-negative value
    int get_value();
    void set_value(int);
    int get_min();
    void set_min(int);
    int get_max();
    void set_max(int);
    void semWait(customer);//if the value becomes negative, the process becomes blocked
    void semSignal();//this unblocks a process
    
private:
    int value;
    int min;
    int max;
};

#endif /* Semaphore_hpp */
