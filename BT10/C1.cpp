#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    int n;

public:
    
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1]; 
        strcpy(str, s);
    }

    
    ~String() {
        delete[] str;
    }

    
    void print() const {
        std::cout << str << std::endl;
    }

    
    void append(const char* s) {
        int len = strlen(s);
        char* temp = new char[n + len + 1]; 
        strcpy(temp, str);                 
        strcat(temp, s);                   
        delete[] str;                      
        str = temp;                        
        n = n + len;                       
    }
};

int main() {
    String greeting("Hello");
    greeting.print();        
    greeting.append(" there");
    greeting.print();        
    return 0;
}
