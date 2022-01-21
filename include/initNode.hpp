/*
SingleLinkList
File: initNode.hpp
Learn Cpp
Created by xxx on DD/MM/YY
Copyrighted © 2022 Luu Kien. All rights reserved
*/
#ifndef _INITNODE_HPP
#define _INITNODE_HPP

#include <iostream>


//Declare structure 1 node
struct node
{
    int data;               //giá trị
    struct node *pNext;     //địa chỉ dạng struct
};
typedef struct node NODE;

//Declare structure link list
struct list //ràng buoc pHead và pTail cho node
{
    NODE *pHead;    //equivalent: struct node  *pHead
    NODE *pTail;    //equivalent: struct node  *pTail
};
typedef struct list LIST; //replace struct list to LIST

//Init struct list, muc dich la tao ra danh sach trong
void Init(LIST &l);  //reference 1 l

//Init a node , muc dich tao ra 1 node de them vao danh sach lien ket da co
NODE *InitNODE(int x); //tao ham node chua value x nao do

#endif