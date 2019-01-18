// =====================================================================================
// 
//       Filename:  factory_method_board.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2019年01月18日 21时47分32秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  YOUR NAME (), 
//        Company:  
// 
// =====================================================================================
#include "board.hpp"
#include "factory_method_board.hpp"

CBoardFactoryMethod::CBoardFactoryMethod()
{
}

CBoardVersion1Factory::CBoardVersion1Factory()
{
}

CBoardVersion2Factory::CBoardVersion2Factory()
{
}

CBoard* CBoardVersion1Factory::CreateBoard()
{
	return new CBoardVersion1(); // null
}

CBoard* CBoardVersion2Factory::CreateBoard()
{
	return new CBoardVersion2(); // null
}
CBoardVersion3Factory::CBoardVersion3Factory()
{
}

CBoard* CBoardVersion3Factory::CreateBoard()
{
	return new CBoardVersion3(); // null
}

