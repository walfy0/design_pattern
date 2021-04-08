//模版方法模式
#include<stdio.h>

class A
{
    public:
    bool fun1(){return 1;}
    virtual void fun2(){}
    void fun3(){}
    virtual void fun4(){}
    void fun5(){}
    void dofun(){
        if(fun1()){
            fun2();
        }
        fun3();
        for(int i=1;i<=5;i++)
            fun4();
        fun5();
    }
    ~A(){}
};

class B: public A
{
    public:
    void fun2(){}
    void fun4(){}
    ~B(){}
};

int main()
{
    A *a = new B();
    a->dofun();
    printf("%d\n",1);
}
