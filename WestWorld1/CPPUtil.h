#ifndef CPPUTIL_H
#define CPPUTIL_H

//
//
//

class Uncopyable
{
protected:
    Uncopyable() {}
    ~Uncopyable() {}
private:
    Uncopyable(const Uncopyable &);
    Uncopyable & operator=(const Uncopyable&);
};

#endif
