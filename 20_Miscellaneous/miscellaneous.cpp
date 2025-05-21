/*

I.
    difference between class and struct in inheritance
        1) all members of a class become private by default
        2) all members of a struct keep the same member

II.
    covariant return types:
    It return a derived datatype of a base class in a derived class
    1) rules:
        in base class the function must be virtual
        returning datatype must be a pointer or an address
        returning datatype must be a derived datatype
        signature must be identical to a base class

III.
    final keyword can restrict inheritance and override

*/

#include <iostream>

// in this example i will implement inheritance
class Shape
{
protected:
    std::string name;
    double area;
    double perimeter;
public:
    Shape(const std::string& n = "Unnamed shape") : name(n), area(0.0), perimeter(0.0)
    {
        std::cout << "Shape constructor" << std::endl;
    }

    virtual ~Shape()
    {
        std::cout << "Shape destructor" << std::endl;
    }

    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;

    void displayInfo() const
    {
        std::cout << "--- " << name << " ---" << std::endl;
        std::cout << "Area: " << area << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;
    }
};

// public makes all base public become public and all protected become protected
class Square : public Shape
{
private:
    double side;
public:
    Square(double r, const std::string& n = "Square") : Shape(n), side(r)
    {
        std::cout << "Square constructor" << std::endl;
        calculateArea();
        calculatePerimeter();
    }

    ~Square() override
    {
        std::cout << "Square destructor" << std::endl;
    }

    void calculateArea() override
    {
        area = side * side;
    }

    void calculatePerimeter() override
    {
        area = side * 4;
    }
};

// in this example i will show covariant return types as well as working with pointers and addresses
class BaseProduct
{
public:
    std::string name;

    BaseProduct(const std::string& n = "not given") : name(n)
    {
        std::cout << "BaseProduct was created" << std::endl;
    }

    virtual ~BaseProduct()
    {
        std::cout << "BaseProduct was destroyed" << std::endl;
    }

    virtual BaseProduct* clone() const
    {
        std::cout << "BaseProduct was cloned" << std::endl;
        return new BaseProduct(name);
    }

    virtual void display() const
    {
        std::cout << "BaseProduct is " << name << std::endl;
    }
};

class Book : public BaseProduct
{
public:
    std::string author;

    Book(const std::string& n = "not given", const std::string& a = "unknown") : BaseProduct(n), author(a)
    {
        std::cout << "Book was created" << std::endl;
    }

    ~Book() override
    {
        std::cout << "Book was destroyed" << std::endl;
    }

    Book* clone() const override
    {
        std::cout << "Book was cloned" << std::endl;
        return new Book(name, author);
    }

    void display() const override
    {
        std::cout << "The author of the book is " << name << std::endl;
    }
};

class FinalClass final
{
public:
    int x;
    int y;

    FinalClass(int x, int y) : x(x), y(y)
    {
        std::cout << "you can not inherit this class" << std::endl;
    }

    virtual ~FinalClass()
    {
        std::cout << "you can not inherit this destructor" << std::endl;
    }
}

void test1()
{
    Square square(5);

    // addressing object directly
    square.calculateArea();

    // creating a pointer to a base class and addressing the derived ones
    Shape* shapePtr = &square;
    shapePtr->displayInfo();
}

void test2()
{
    Book product = Book("Tail", "Pushkin");

    Book* bookClone = product.clone();
    bookClone->display();
}

int main()
{
    test1();
    test2();

    return 0;
}