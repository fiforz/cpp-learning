#include <iostream>
#include <string> // 建议显式包含 string 头文件

using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

struct Teacher {
    string name;
    int age;
    double salary;
};

int main() {
    // 测试 1：打印基础欢迎信息
    cout << "=======================================" << endl;
    cout << "  C++ 编译环境测试成功！Hello, World!  " << endl;
    cout << "=======================================\n" << endl;

    // 测试 2：实例化 Student 结构体并赋值
    Student s1;
    s1.name = "张三";
    s1.age = 20;
    s1.gpa = 3.8;

    // 测试 3：使用初始化列表实例化 Teacher 结构体 (C++11 及以上特性)
    Teacher t1 = {"李老师", 35, 8500.50};

    // 测试 4：打印结构体内容
    cout << "【学生信息】" << endl;
    cout << "姓名: " << s1.name << endl;
    cout << "年龄: " << s1.age << endl;
    cout << "GPA:  " << s1.gpa << endl;
    
    cout << "\n【教师信息】" << endl;
    cout << "姓名: " << t1.name << endl;
    cout << "年龄: " << t1.age << endl;
    cout << "薪水: " << t1.salary << endl;

    cout << "\n程序运行结束。" << endl;

    return 0;
}