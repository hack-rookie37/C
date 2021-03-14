#include <iostream>
#include <cstring>

class String
{
    char *str = nullptr;
    int len = 0;

public:
    String(char c, int n); // n letters c.
    String(const char *s);
    String(const String &s);
    ~String();

    void add_string(const String &s);  // append s to back of String
    void copy_string(const String &s); // copy s to String
    int strlen();                      // return length of String
    void print_string();
};

String::String(char c, int n)
{
    str = new char[n + 1];
    for (int i = 0; i < n; i++)
    {
        str[i] = c;
    }
    str[n] = '\0';
    len = n;
}

String::String(const char *s)
{
    len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    s -= len;
    str = new char[len + 1];
    strncpy(str, s, len + 1);
}

String::String(const String &s)
{
    str = new char[s.len + 1];
    len = s.len;
    strncpy(str, s.str, len + 1);
}

String::~String()
{
    if (str != nullptr)
    {
        delete[] str;
    }
}

void String::add_string(const String &s)
{
    int sumLen = len + s.len;
    char *temp = new char[sumLen + 1];
    strncpy(temp, str, len);
    strncpy(temp + len, s.str, s.len + 1);
    delete[] str;
    len = sumLen;
    str = temp;
}

void String::copy_string(const String &s)
{
    delete[] str;
    char *temp = new char[s.len + 1];
    strncpy(temp, s.str, s.len + 1);
    len = s.len;
    str = temp;
}

int String::strlen()
{
    return len;
}

void String::print_string()
{
    if (str != nullptr)
    {
        std::cout << str << std::endl;
    }
}

int main()
{

    String s1('a', 10);
    String s2("ABCDE");
    String s3(s2);

    s1.print_string();
    s2.print_string();
    s3.print_string();

    std::cout << s1.strlen() << std::endl;
    std::cout << s2.strlen() << std::endl;
    std::cout << s3.strlen() << std::endl;

    s1.add_string(s2);
    s1.print_string();
    std::cout << s1.strlen() << std::endl;

    s2.add_string(s1);
    s2.print_string();
    std::cout << s2.strlen() << std::endl;

    s1.copy_string(s3);
    s1.print_string();
    std::cout << s1.strlen() << std::endl;

    return 0;
}