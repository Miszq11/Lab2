class Motorcycle
{
private:
    unsigned int enginePower;
    unsigned int engineDisplacement;
    bool engineStarted;

    void setup();
public:
    Motorcycle();
    Motorcycle(Motorcycle&);
    Motorcycle(unsigned int, unsigned int);
};