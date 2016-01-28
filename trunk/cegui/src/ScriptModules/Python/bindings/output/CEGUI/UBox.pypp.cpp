// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "UBox.pypp.hpp"

namespace bp = boost::python;

void register_UBox_class(){

    { //::CEGUI::UBox
        typedef bp::class_< CEGUI::UBox > UBox_exposer_t;
        UBox_exposer_t UBox_exposer = UBox_exposer_t( "UBox", bp::init< >() );
        bp::scope UBox_scope( UBox_exposer );
        UBox_exposer.def( bp::init< CEGUI::UDim const & >(( bp::arg("margin") )) );
        bp::implicitly_convertible< CEGUI::UDim const &, CEGUI::UBox >();
        UBox_exposer.def( bp::init< CEGUI::UDim const &, CEGUI::UDim const &, CEGUI::UDim const &, CEGUI::UDim const & >(( bp::arg("top"), bp::arg("left"), bp::arg("bottom"), bp::arg("right") )) );
        UBox_exposer.def( bp::init< CEGUI::UBox const & >(( bp::arg("b") )) );
        UBox_exposer.def( bp::self != bp::self );
        UBox_exposer.def( bp::self * bp::other< float >() );
        UBox_exposer.def( bp::self * bp::other< CEGUI::UDim >() );
        UBox_exposer.def( bp::self + bp::self );
        { //::CEGUI::UBox::operator=
        
            typedef ::CEGUI::UBox & ( ::CEGUI::UBox::*assign_function_type )( ::CEGUI::UBox const & ) ;
            
            UBox_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::UBox::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >() );
        
        }
        UBox_exposer.def( bp::self == bp::self );
        UBox_exposer.def_readwrite( "d_bottom", &CEGUI::UBox::d_bottom );
        UBox_exposer.def_readwrite( "d_left", &CEGUI::UBox::d_left, "*************************************************************************\n\
            Data Fields\n\
        *************************************************************************\n" );
        UBox_exposer.def_readwrite( "d_right", &CEGUI::UBox::d_right );
        UBox_exposer.def_readwrite( "d_top", &CEGUI::UBox::d_top, "*************************************************************************\n\
            Data Fields\n\
        *************************************************************************\n" );
    }

}