/*
 * main.cpp
 *
 *  Created on: 06.07.2023
 *      Author: fabia
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string.h>

class RouletteSpiel {
public:
    virtual bool gewonnen(int gewinnzahl) = 0;
    virtual ~RouletteSpiel() {}
};

class ZahlSpiel : public RouletteSpiel {
private:
    std::vector<int> zahlen;

public:
    ZahlSpiel(const std::vector<int>& z) : zahlen(z) {}

    bool gewonnen(int gewinnzahl) override {
        for (int zahl : zahlen) {
            if (zahl == gewinnzahl) {
                return true;
            }
        }
        return false;
    }
};

class GeradeUngeradeSpiel : public RouletteSpiel {
private:
    int geradeUngerade;

public:
    GeradeUngeradeSpiel(int gu) : geradeUngerade(gu) {}

    bool gewonnen(int gewinnzahl) override {
        return ((geradeUngerade == 1 && gewinnzahl % 2 == 0) || (geradeUngerade == 2 && gewinnzahl % 2 == 1));
    }
};

int main() {


    return 0;
}

