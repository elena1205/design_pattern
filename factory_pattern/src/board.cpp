// =====================================================================================
// 
//       Filename:  board.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2019年01月18日 22时44分39秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  YOUR NAME (), 
//        Company:  
// 
// =====================================================================================

#include <iostream>

#include "board.hpp"
using namespace std;

CBoard::CBoard()
{
}

CBoardVersion1::CBoardVersion1()
{
}

CBoardVersion2::CBoardVersion2()
{
}


void CBoard::ShowBoard(void)
{
    cout<<"this is the main board!"<<endl;
}

void CBoardVersion1::ShowBoard(void)
{
    cout<<"this is the version 1.x board!"<<endl;
}

void CBoardVersion2::ShowBoard(void)
{
    cout<<"this is the version 2.x board!"<<endl;
}
CBoardVersion3::CBoardVersion3()
{
}

void CBoardVersion3::ShowBoard()
{
    cout<<"this is the version 3.x board!"<<endl;
}

CBoard97::CBoard97()
{
}

CBoardA::CBoardA()
{
}

CBoardB::CBoardB()
{
}

void CBoardA::ShowBoard(void)
{
    cout<<"this is board A!"<<endl;
}

void CBoardB::ShowBoard(void)
{
    cout<<"this is board B!"<<endl;
}
