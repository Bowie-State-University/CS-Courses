   
class clockType
{
public:
    void setTime(int hours, int minutes, int seconds);
    void printTime() const;
    
    bool operator==(const clockType& otherClock) const;
      //Overload the operator ==

    clockType(int = 0, int = 0, int = 0);

private:
    int hr; 
    int min;
    int sec;
};
