/*
SingleLinkList
File: initNode.cpp
Learn Cpp
Created by xxx on DD/MM/YY
Copyrighted © 2022 Luu Kien. All rights reserved
*/
#include "../include/initNode.hpp"

using namespace std;

void Init(LIST &l)
{
    l.pHead = NULL; //Both nodes point to NULL
    l.pTail = NULL; //Because the list has no element
}

NODE *InitNODE(int x) //tao ham node chua value x nao do
{
    NODE *p = new NODE;//cap phat vung nho cho NODE p    // NODE *p;
                                                         // p = new NODE;
    if(p == NULL)      //Khi cap phat vung nho khong thanh cong, do thieu ram....
    {
        cout<<"Used out of memory !!!!\n";
        return NULL;
    }
    p->data = x;        //transmission x for data
    p->pNext= NULL;     //dau tien khai bao node chua connect den node nào
    return p;
}