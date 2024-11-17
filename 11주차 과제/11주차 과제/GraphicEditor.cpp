#include "GraphicEditor.h"

void GraphicEditor::create(int num) {
    switch (num) {
    case 1:
        if (count == 0) {
            pStart = new Line();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Line());
        }
        count++;
        break;

    case 2:
        if (count == 0) {
            pStart = new Circle();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Circle());
        }
        count++;
        break;

    case 3:
        if (count == 0) {
            pStart = new Rect();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Rect());
        }
        count++;
        break;
    }
}

void GraphicEditor::indelete(int num) {
    if (num >= count || num < 0) {
        cout << "인덱스를 잘못 입력하셨습니다." << endl;
        return;
    }

    Shape* del = pStart;
    Shape* prev = nullptr;

    for (int i = 0; i < num; i++) {
        prev = del;
        del = del->getNext();
    }

    if (num == 0) {
        pStart = del->getNext();
    }
    else {
        prev->setNext(del->getNext());
    }

    if (del == pLast) {
        pLast = prev;
    }

    delete del;
    count--;
}

void GraphicEditor::call() {
    bool exit = true;
    cout << "그래픽 에디터입니다." << endl;
    while (exit) {
        switch (UI::main_memu()) {
        case 1:
            create(UI::one_menu());
            break;
        case 2:
            indelete(UI::two_menu());
            break;
        case 3: {
            Shape* p = pStart;
            for (int i = 0; i < count; i++) {
                cout << i << ": ";
                p->paint();
                p = p->getNext();
            }
            break;
        }
        case 4:
            exit = false;
            break;
        }
    }
}

