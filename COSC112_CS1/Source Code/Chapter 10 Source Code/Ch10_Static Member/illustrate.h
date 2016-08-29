   
class illustrate
{ 
public: 
    static int count;	//public static variable

    void print() const;
      //Function to output x, y, and count.

    void setX(int a);
      //Function to set x.
      //Postcondition: x = a;

    static void incrementY();
      //static function
      //Function to increment y by 1.
      //Postcondition: y = y + 1

    illustrate(int a = 0);
      //constructor 
      //Postcondition: x = a;
      //               If no value is specified for a, x = 0;

private:
    int x;
    static int y;	//private static variable
};
