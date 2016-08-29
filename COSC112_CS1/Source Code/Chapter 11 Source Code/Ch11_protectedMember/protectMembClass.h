   
#ifndef H_protectMembClass
#define H_protectMembClass

class bClass  
{
public:
    void setData(double);
    void setData(char, double);
    void print() const;

    bClass(char ch = '*', double u = 0.0); 

protected:
    char bCh;

private:
    double bX;
};

#endif

