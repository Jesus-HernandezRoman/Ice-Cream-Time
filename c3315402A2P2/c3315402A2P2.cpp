//
//  main.cpp
//  c3315402A2P2
//
//  Created by Jesus Hernandez Roman on 10/8/18.
//  Copyright © 2018 Jesus Hernandez Roman. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <thread>
#include <pthread.h>
#include "Customer.hpp"
#include "Semaphore.hpp"
using namespace std;

void threadFN(customer a, semaphore& b)
{
    b.semWait(a);
}

int main(int argc, const char * argv[])
{
    ifstream infile(argv[1]);
    if(infile.fail())
    {
        cout<<"Input file opening failed"<<endl;
        exit(1);
    }
    
    int Arrive, Eating;
    string ID;
    vector<customer> customers;
    semaphore Sem;
    
    while(infile >> Arrive >> ID >> Eating)
    {
        customer temp;
        temp.set_arrives(Arrive);
        temp.set_id(ID);
        temp.set_eating(Eating);
        customers.push_back(temp);
    }
    infile.close();
    cout<<"Customer   arrives     Seats   Leaves"<<endl;
    
    int Min = customers[0].get_eating();
    int Max = customers[0].get_eating();
    
    for(int a = 0; a < customers.size(); a++)
    {
        if(Min > customers[a].get_eating())
        {
            Min = customers[a].get_eating();
            Sem.set_min(Min);
        }
        if(Max < customers[a].get_eating())
        {
            Max = customers[a].get_eating();
            Sem.set_max(Max);
        }
        //Sem.semWait(customers[a]);
        thread t(threadFN, customers[a], ref(Sem));
        t.join();
    }
    
    return 0;
}

