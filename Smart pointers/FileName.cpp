
#include<iostream>
#include<memory>
#include<vector>

/*
����� ��������� ����������:
����������� ������� �� ������� - ����� ������������ �� ��������� � ������

��� �������� �������������� ������ ������
   �������� ���� ������ � �� �������� ������������ ��� ���������� 
    � ������������� ����� ����������
��� ���������� �������� ����� ������� 
            new/delete
    
��� ����������� �������



 ����� ��������� ��������� � ���� 16 - ������ ����� 

 ������� ����� ������� ���������� � ����� ����������

 ��������� � ���������� ������ #include<memory>

 �������� �������� 
 ��������� ����������, ����������� �� ���� �������    ����� 
 -������� ������ ������� ��������� ����������� �� �������� ���������

 ����� ��������� - �������� ������, ������ �������������.
 auto_ptr // ������ �� ���������� 


 ����������� ��������� �����:
  �) ����� ��� ������������� ����������
  �) ���� ��������� �������� � ����������� ���������� ������

  ��� ���� ����� ��������� ������ �������� ���� �������� 3 ��������� �������
  1 - ��������
  2 ��������
  3-

*/

//
//class Auto_ptr
//{
//private:
//    int* data;
//
//public:
//    // �������� ��� ������������� ���������� ���������� 
//    Auto_ptr(int* data) : data(data){ }// ��� �� ������������ ������������� �� ��������� * 
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
//    //std::auto_ptr;// � 17 ��������� ��������� � ��������� delete
//                   // � 20 ��������� ������ �� ��������� �����
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
//       // std::unique_ptr - ������������ ��� ������������ � ������� �������� ����� ������ � ����
//
//        return{};
//    }

// ��� �������� ����� ��������� � ��� ������ ������ � std::unique_ptr<SomeClass>
// ��� ��� ��� ����

//class SomeClass;
//    class Obj
//    {
//    private:
//        int a;
//        float b;
//        std::unique_ptr<SomeClass> p_obj;//
//        // ����� ���� ��������� ������� �����������
//        // ��� ������������ ����� ����� �������
//        //����� ����� ���� ����������� ����� ������������ ���������� �� �����������
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
//        // std::unique_ptr - ������������ ��� ������������ � ������� �������� ����� ������ � ����
//
//        return{};
//    }

// �������� ����� Derived  � ��������� ��� ���� ��� 
//����� ��������� � ������������ � ������������.

//class SomeClass;
//class Obj
//{
//private:
//    int a;
//    float b;
//    std::unique_ptr<SomeClass> p_obj;//
//    // ����� ���� ��������� ������� �����������
//    // ��� ������������ ����� ����� �������
//    //����� ����� ���� ����������� ����� ������������ ���������� �� �����������
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
//    // std::unique_ptr - ������������ ��� ������������ � ������� �������� ����� ������ � ����
//    std::vector<Obj>arr;
//    arr.push_back(Obj(2, .3));
//    arr.push_back(Derived(2, .3));
//    return{};
//}

//���������� std::unique_ptr ������ ���������

class SomeClass;
class Obj
{
private:
    int a;
    float b;
  //  std::unique_ptr<SomeClass> p_obj;//
    // ����� ���� ��������� ������� �����������
    // ��� ������������ ����� ����� �������
    //����� ����� ���� ����������� ����� ������������ ���������� �� �����������

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
    // std::unique_ptr - ������������ ��� ������������ � ������� �������� ����� ������ � ����
    //std::vector<Obj>arr;
    /*arr.push_back(Obj(2, .3));
    arr.push_back(Derived(2, .3));*/


    std::vector<std::unique_ptr<Obj>>arr;
    arr.push_back(std::make_unique<Obj>(3, .3));
    arr.emplace_back(std::make_unique<Derived>(3, .3));


    return{};
}





















