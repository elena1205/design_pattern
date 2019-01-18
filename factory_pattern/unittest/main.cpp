// =====================================================================================
// 
//       Filename:  main.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2019年01月18日 18时51分23秒
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
#include "factory_method_board.hpp"
#include "abstract_factory_board.hpp"

using namespace std;



#include	<cstdlib>



    void
SimpleFactoryExample ( void )
{
    CBoardSimpleFactory *board_factory = new CBoardSimpleFactory();
    CBoard *brd1 = board_factory->CreateBoard(1);
    brd1->ShowBoard();
    CBoard *brd2 = board_factory->CreateBoard(2);
    brd2->ShowBoard();
    CBoard *brd3 = board_factory->CreateBoard(3);
    brd3->ShowBoard();
    return ;
}		// -----  end of function SimpleFactoryExample  -----

    void
FactoryMethodExample ( void )
{
    CBoardFactoryMethod *board_v1_factory = new CBoardVersion1Factory();
    CBoardFactoryMethod *board_v2_factory = new CBoardVersion2Factory();
    CBoardFactoryMethod *board_v3_factory = new CBoardVersion3Factory();
    CBoard *brd1 = board_v1_factory->CreateBoard();
    brd1->ShowBoard();
    CBoard *brd2 = board_v2_factory->CreateBoard();
    brd2->ShowBoard();
    CBoard *brd3 = board_v3_factory->CreateBoard();
    brd3->ShowBoard();
    return ;
}		// -----  end of function FactoryMethodExample  -----
    void
AbstractFactoryExample ( void )
{
    CBoardAbstractFactory *board_type_a = new CBoardTypeA();
    CBoard * board_a = board_type_a->CreateBoard();
    board_a->ShowBoard();
    CBoard97 *board97_a = board_type_a->CreateBoard97();
    board97_a->ShowBoard();
    
    return ;
}		// -----  end of function AbstractFactoryExample  -----
    int
main ( int argc, char *argv[] )
{
    SimpleFactoryExample();
    FactoryMethodExample();
    AbstractFactoryExample();
    return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
