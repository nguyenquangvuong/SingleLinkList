/*
SingleLinkList
File: addElement.cpp
Learn Cpp
Created by xxx on DD/MM/YY
Copyrighted © 2022 Luu Kien. All rights reserved
*/

#include "../include/addElement.hpp"

using namespace std;

//add node p to the firt link list 
void addToFirst(LIST &l, NODE *p)
{
    if(l.pHead == NULL) //Kiem tra phan node dau
    {
        l.pHead = l.pTail = p; //firt = last = p (node khởi tạo) = NULL
        cout<<"Phan tu dau tien rong !"<<endl;
    }
    else
    {
        p->pNext = l.pHead;     //pointer node want add to node p link to firt node - pHead
        l.pHead  = p;           //update pHead to node p
    }
}
//add node p to the last link list 
void addToLast(LIST &l, NODE *p)
{
    if(l.pHead == NULL)
    {
        l.pHead = l.pTail = p; //firt = last = p = NULL
    }
    else
    {
        l.pTail->pNext = p; //pTail link to node p
        l.pTail = p;        //update p to pTail
    }
}

