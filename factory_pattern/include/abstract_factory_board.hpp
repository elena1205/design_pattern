// =====================================================================================
// 
//       Filename:  abstract_factory_board.hpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2019年01月18日 22时30分05秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  YOUR NAME (), 
//        Company:  
// 
// =====================================================================================


// =====================================================================================
//        Class:  CAbstractFactoryBoard
//  Description:  
// =====================================================================================
class CBoardAbstractFactory
{
    public:
        // ====================  LIFECYCLE     =======================================
        CBoardAbstractFactory();                             // constructor

        // ====================  ACCESSORS     =======================================
        virtual CBoard* CreateBoard() = 0;
        virtual CBoard97* CreateBoard97() = 0;
        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

    protected:
        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class CAbstractFactoryBoard  -----

// =====================================================================================
//        Class:  CBoardTypeA
//  Description:  
// =====================================================================================
class CBoardTypeA : public CBoardAbstractFactory
{
    public:
        // ====================  LIFECYCLE     =======================================
        CBoardTypeA ();                             // constructor

        // ====================  ACCESSORS     =======================================
        CBoard* CreateBoard();
        CBoard97* CreateBoard97();

        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

    protected:
        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class CBoardTypeA  -----

// =====================================================================================
//        Class:  CBoardTypeB
//  Description:  
// =====================================================================================
class CBoardTypeB : public CBoardAbstractFactory
{
    public:
        // ====================  LIFECYCLE     =======================================
        CBoardTypeB ();                             // constructor

        // ====================  ACCESSORS     =======================================
        CBoard* CreateBoard();
        CBoard97* CreateBoard97();

        // ====================  MUTATORS      =======================================

        // ====================  OPERATORS     =======================================

    protected:
        // ====================  DATA MEMBERS  =======================================

    private:
        // ====================  DATA MEMBERS  =======================================

}; // -----  end of class CBoardTypeB  -----
