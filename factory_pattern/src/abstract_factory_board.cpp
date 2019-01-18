// =====================================================================================
// 
//       Filename:  abstract_factory_board.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2019年01月18日 22时29分55秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  YOUR NAME (), 
//        Company:  
// 
// =====================================================================================

#include "board.hpp"
#include "abstract_factory_board.hpp"

CBoardAbstractFactory::CBoardAbstractFactory()
{
}

CBoardTypeA::CBoardTypeA()
{
}

CBoardTypeB::CBoardTypeB()
{
}

CBoard* CBoardTypeA::CreateBoard()
{
	return new CBoardVersion1(); // null
}

CBoard* CBoardTypeB::CreateBoard()
{
	return new CBoardVersion2(); // null
}

CBoard97* CBoardTypeA::CreateBoard97()
{
	return new CBoardA(); // null
}

CBoard97* CBoardTypeB::CreateBoard97()
{
	return new CBoardB(); // null
}

