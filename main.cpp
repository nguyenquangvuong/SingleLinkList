/*
SingleLinkList
File: main.cpp
Learn Cpp
Created by xxx on 21/01/2022
Copyrighted © 2022 Luu Kien. All rights reserved
*/

#include <bits/stdc++.h>
#include "include/initNode.hpp"
#include "include/addElement.hpp"
#include "include/findMax.hpp"
#include "include/exportList.hpp"

using namespace std;

int main()
{
    LIST l;
    Init(l);

    int n;
    cout <<"\n Type in the number will add: "; cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cout<<"\nType int value:";
        cin>>x;
        NODE *p = InitNODE(x);//Init a node int;
        addToFirst(l, p);      //add node p to list link
        // addToLast(l, p);      //add node p to list link
    }
    cout << "\n\n\t List link: ";

    ExportList(l);
   
    cout << "\n\n\tGia tri lon nhat la: " << findMax(l) << "\n";
    return 0;
}