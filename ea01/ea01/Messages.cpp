#include <iostream>
#include <cstring>
#include "Messages.h"
using namespace std;

Messages::Messages() {
    pStr = new char[1];
    pStr[0] = '\0';
    cout << "Created [" << this << "]" << endl;
}

Messages::Messages(const char* s) {
    pStr = new char[(strlen(s) + 1)];
    strcpy_s(pStr, (strlen(s) + 1), s);
    cout << "Created [" << this << ", " << pStr << "]" << endl;
}

Messages::~Messages() {
    cout << "Freed [" << this << ", " << pStr << "]" << endl;
    delete[] pStr;
}

void Messages::print() const {
    cout << pStr << endl;
}

void Messages::setMessage(const char* s) {
    delete[] pStr;
    pStr = new char[(strlen(s) + 1)];
    strcpy_s(pStr, (strlen(s) + 1), s);
}