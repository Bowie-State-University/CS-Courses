 
class classIllusFriend
{
    friend void friendFunc(classIllusFriend cIFObject);
  
public:
    void print();
    void setx(int a);

private:
    int x;
};

