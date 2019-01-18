// =====================================================================================
// 
//       Filename:  Board.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2019年01月18日 18时26分40秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  YOUR NAME (), 
//        Company:  
// 
// =====================================================================================


#include <iostream>
#include "board.hpp"
#include "simple_factory_board.hpp"


CBoardSimpleFactory::CBoardSimpleFactory()
{
}

CBoard *CBoardSimpleFactory::CreateBoard(int brd_type)
{
    CBoard *create_board = NULL ;
    switch(brd_type)
    {
        case 1:
            create_board = new CBoardVersion1();
            break;
        case 2:
            create_board = new CBoardVersion2();
            break;
        case 3:
            create_board = new CBoardVersion3();
            break;
        default:
            break;
    }
            
	return create_board;   /* something */;
}

