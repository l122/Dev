#include <iostream>

class MyClass
{
  private:
    int Size;
  public:
    int *data;

    MyClass(int size)
    {
      std::cout << "Вызван конструктор " << this << std::endl;
      this->data = new int[size];
      this->Size = size;
      for (int i = 0; i < size; ++i)
      {
        data[i] = i;
      }
    };

    MyClass(const MyClass & other)
    {
      std::cout << "Вызван конструктор копирования "  << this << std::endl;
      this->Size = other.Size;
      this->data = new int[other.Size];
      for (int i = 0; i < other.Size; ++i)
      {
        this->data[i] = other.data[i];
      }
    };


    ~MyClass()
    {
      std::cout <<"Вызван деструктор " << this << std::endl;
    };
};

void Foo(MyClass value)
{
    std::cout << "Вызвана функция Foo" << std::endl;
}

MyClass Foo2()
{
    std::cout << "Вызвана функция Foo2" << std::endl;
    MyClass value(2);
    return value;
}

int main() {
 
  MyClass a(2);
  MyClass b(a);

  return 0;
}