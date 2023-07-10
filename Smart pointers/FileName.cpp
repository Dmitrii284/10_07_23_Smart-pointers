
#include<iostream>
#include<memory>
#include<vector>

/*
Умные указатели используют:
Оперировать данными не копиями - Лучше использовать не указатели а ссылки

Для хранения местоположения блоков памяти
   свойство типа данных и им придется пользоваться при реализации 
    и использования умных указателей
Для управления временем жизни объекта 
            new/delete
    
Для полиморфных вызовов



 Умный Указатель храниться в виде 16 - ричных чисел 

 Разница между обычным указателем и умным указателем

 Храниться в библиотеке МЭМОРИ #include<memory>

 ОСНОВНАЯ ПРОБЛЕМА 
 несколько указателей, указывающих на одну область    копии 
 -объекты класса которые возникают припередаче по значению наприммер

 УМНЫЕ УКАЗАТЕЛИ - передали данные, данные скопировались.
 auto_ptr // Сейчас не используют 


 СОБСТВЕННЫЕ УКАЗАТЕЛИ НУЖНЫ:
  А) нужны для нестандартных поведенийи
  В) Ваша программа начинает с собственным менеджером памяти

  Для того чтобы заставить вектор работать надо передать 3 аргумента шаблома
  1 - аргумент
  2 алокатор
  3-

*/

//
//class Auto_ptr
//{
//private:
//    int* data;
//
//public:
//    // Проблемы при использовании указателей такоготипа 
//    Auto_ptr(int* data) : data(data){ }// так же определяются конструктором по умолчанию * 
//    ~Auto_ptr() { delete data; }
//
//};
//
//void F00(Auto_ptr obj)
//{
//    if (false)
//    {
//        throw 1;
//    }
//    else if (false)
//    {
//        ::exit(1);
//    }
//    ;
//    ;
//    return;
//}
//
//
//int main()
//{
//    std::cout << "Hallo world!\n";
//    //std::unique_ptr;
//    //std::shared_ptr;
//    //std::weak_ptr;
//    //std::auto_ptr;// С 17 стандарта перенесен в категорию delete
//                   // С 20 стандарта удален из поддержки языка
//
//    //std::auto_ptr<int>q; // 
//
//    //Auto_ptr num = new int{ 4 };
//    
//    std::vector<int/*, allocator<trayts */> arr;
//
//    return{};
//}

//class Obj
//{
//private:
//    int a;
//    float b;
//public:
//    Obj() = default;
//    Obj(int val, float val2) : a(val), b(val2){ }
//    ~Obj() = default;
//};
//
//void F10(std::unique_ptr<Obj> &obj){ }
//void F02(const Obj &obj){ }
//
//    int main2()
//    {
//        auto p_uniq = std::make_unique<Obj>(3, 3);
//       // auto p_un(p_uniq);
//        F10(p_uniq);
//        F02(*p_uniq);
//       // std::unique_ptr - используется для полиморфного и прямого хранения полей класса в куче
//
//        return{};
//    }

// КАК записать умный указатель в тип данных КЛАССА И std::unique_ptr<SomeClass>
// Что оно нам ДАЕТ

//class SomeClass;
//    class Obj
//    {
//    private:
//        int a;
//        float b;
//        std::unique_ptr<SomeClass> p_obj;//
//        // Такое поле позволяет хранить наследников
//        // Оно контролирует время жизни объекта
//        //Через такое поле наследником можно пользоваться расчитывая на полиморфизм
//
//    public:
//        Obj() = default;
//        Obj(int val, float val2) : a(val), b(val2) { }
//        ~Obj() = default;
//    };
//
//    void F10(std::unique_ptr<Obj>& obj) { }
//    void F02(const Obj& obj) { }
//
//    int main2()
//    {
//        auto p_uniq = std::make_unique<Obj>(3, 3);
//        // auto p_un(p_uniq);
//        F10(p_uniq);
//        F02(*p_uniq);
//        // std::unique_ptr - используется для полиморфного и прямого хранения полей класса в куче
//
//        return{};
//    }

// Создадим класс Derived  И посмотрим что дает нам 
//Умный указатель в Наследовании И полиморфизме.

//class SomeClass;
//class Obj
//{
//private:
//    int a;
//    float b;
//    std::unique_ptr<SomeClass> p_obj;//
//    // Такое поле позволяет хранить наследников
//    // Оно контролирует время жизни объекта
//    //Через такое поле наследником можно пользоваться расчитывая на полиморфизм
//
//public:
//    Obj() = default;
//    Obj(int val, float val2) : a(val), b(val2) { }
//    virtual~Obj() = default;
//
//};
//class Derived : public Obj
//{
//    int* p;
//public:
//    Derived() = default;
//    Derived(int val, float val2) : Obj(val, val2) { }
//    ~Derived() = default;
//
//};
//
//void F10(std::unique_ptr<Obj>& obj) { }
//void F02(const Obj& obj) { }
//
//int main2()
//{
//    auto p_uniq = std::make_unique<Obj>(3, 3);
//    // auto p_un(p_uniq);
//    F10(p_uniq);
//    F02(*p_uniq);
//    // std::unique_ptr - используется для полиморфного и прямого хранения полей класса в куче
//    std::vector<Obj>arr;
//    arr.push_back(Obj(2, .3));
//    arr.push_back(Derived(2, .3));
//    return{};
//}

//Применение std::unique_ptr Умного указателя

class SomeClass;
class Obj
{
private:
    int a;
    float b;
  //  std::unique_ptr<SomeClass> p_obj;//
    // Такое поле позволяет хранить наследников
    // Оно контролирует время жизни объекта
    //Через такое поле наследником можно пользоваться расчитывая на полиморфизм

public:
    Obj() = default;
    Obj(int val, float val2) : a(val), b(val2) { }
    virtual~Obj() = default;

};
class Derived : public Obj
{
    int* p;
public:
   
    Derived(int val, float val2) : Obj(val, val2) { p = new int{}; }
    ~Derived() 
    {
        delete p;
    } 

};

void F10(std::unique_ptr<Obj>& obj) { }
void F02(const Obj& obj) { }

int main2()
{
    auto p_uniq = std::make_unique<Obj>(3, .3);
    // auto p_un(p_uniq);
    F10(p_uniq);
    F02(*p_uniq);
    // std::unique_ptr - используется для полиморфного и прямого хранения полей класса в куче
    //std::vector<Obj>arr;
    /*arr.push_back(Obj(2, .3));
    arr.push_back(Derived(2, .3));*/


    std::vector<std::unique_ptr<Obj>>arr;
    arr.push_back(std::make_unique<Obj>(3, .3));
    arr.emplace_back(std::make_unique<Derived>(3, .3));


    return{};
}





















