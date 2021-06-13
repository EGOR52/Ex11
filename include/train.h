//
// Created by Егор on 13.06.2021.
//
#ifndef EX11_TRAIN_H
#define EX11_TRAIN_H

class Cage {
private:
    bool light;

public:
    Cage* next;
    Cage* prev;
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool getCurStatus() const { return light; }
    void setLight();
    void changeLight();
};

class Train {
private:
    Cage* first = nullptr;
    Cage* last = nullptr;

public:
    Train();
    void addCage(Cage* _cage);
    void printInfo();
    unsigned length();
};

#endif //EX11_TRAIN_H