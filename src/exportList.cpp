/*
SingleLinkList
File: exportList.cpp
Learn Cpp
Created by xxx on 21/01/2022
Copyrighted © 2022 Luu Kien. All rights reserved
*/

//export list link

#include "../include/exportList.hpp"

using namespace std;


void ExportList(LIST l)
{
    for(NODE *k = l.pHead; k != NULL; k = k->pNext) //NODE *k;
    {                                               //k = l.pHead;
        cout << k->data << "\t";                    //for(k ; k != NULL; k=k->pNext)
    }
}