/*
    Author : Asad Shahabuddin
    File   : main.cpp
    Details: Lorem Ipsum.
    Email  : shahabuddin.a@husky.neu.edu
*/

#include<iostream>

using namespace std;

extern "C" int GetValueFromASM();

int
main(void)
{
    cout<<"ASM said '"<<GetValueFromASM()<<"'."<<endl;
    return 0;
}
