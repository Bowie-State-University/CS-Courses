// This illustrates that in a private inheritance the
// public and protected members of the base class becomes
// the private members of the derived class. However, the
// derived class can directly access the public and protected
// members of the base class.
  
class baseClass  
{
public:
    void one();
    int x;

protected:
    void two();
    int y;

private:
    int a;
};

class derivedC : private baseClass
{
public:
    void three();

protected:
    void four();

private:
    int b;
};