/*
SingleLinkList
File: findMax.cpp
Learn Cpp
Created by xxx on 21/01/2022
Copyrighted © 2022 Luu Kien. All rights reserved
*/

#include "../include/findMax.hpp"

int findMax(LIST l)
{
    int max = l.pHead->data;
    NODE *k;
    k = l.pHead->pNext;
    // for(NODE *k = l.pHead->pNext; k != NULL; k = k ->pNext )
    for(k; k != NULL; k = k ->pNext )
    {
        if(max < k->data)
        {
            max = k->data;
        }
    }
    return max;
}