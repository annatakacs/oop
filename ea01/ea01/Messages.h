#pragma once

class Messages {
private:
    char* pStr;

public:
    Messages();
    Messages(const char* s);
    ~Messages();
    void print() const;
    void setMessage(const char* s);
};