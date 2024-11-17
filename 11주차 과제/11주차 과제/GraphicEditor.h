#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include "Shape.h"
#include "UI.h"


class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
    int count;
public:
    GraphicEditor() : pStart(nullptr), pLast(nullptr), count(0) {}
    ~GraphicEditor() {
        Shape* current = pStart;
        while (current) {
            Shape* next = current->getNext();
            delete current;
            current = next;
        }
    }

    void create(int num);
    void indelete(int num);
    void call();
};

#endif

