class A
{
public:
  A() {};

private:
    A (A&b){}
    A&operator = (A&b){ return *this;
    }

};