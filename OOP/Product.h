#pragma once

#include<iostream>
#include<string>
using namespace std;
using namespace System;
ref class Product {
    int PID;
public:

    int Quantity;
    String^ PName;

    int weight;
    int price;


    void SetPDetails(String^ name, int W, int cost, int Qty) {
        PName = name;
        weight = W;
        price = cost;
        Quantity = Qty;

    }
    void SetPID(int id) {
        PID = id;
    }

    inline int GetPID() {
        return PID;
    }

};

