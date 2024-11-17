#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;


class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape() : next(nullptr) {}
    virtual ~Shape() {}
    void paint() { draw(); }
    Shape* add(Shape* p) {
        this->next = p;
        return p;
    }
    Shape* getNext() { return next; }
    void setNext(Shape* p) { this->next = p; }
};


class Circle : public Shape {
protected:
    void draw() override {
        cout << "Circle" << endl;
    }
};


class Rect : public Shape {
protected:
    void draw() override {
        cout << "Rectangle" << endl;
    }
};


class Line : public Shape {
protected:
    void draw() override {
        cout << "Line" << endl;
    }
};

#endif 

