 
#ifndef H_baseClassVirtual
#define H_baseClassVirtual
 
class baseClass
{
public:
    virtual void print();       //virtual function
    baseClass(int u = 0);

private:
    int x;
};

#endif