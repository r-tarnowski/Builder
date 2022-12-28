//
// Created by tarnowski on 28.12.22.
//

#include <string>
#include <vector>
//#include <iostream>
//#include <fstream>

#ifndef HTML_ELEMENT_H

struct HtmlElement {
   std::string name;
   std::string text;
   std::vector<HtmlElement> elements;

   HtmlElement() {}
   HtmlElement( const std::string & name, const std::string & text)
                : name( name ), text( text ) {}

   std::string str( int indent = 0 ) const {
      //std::ostringstream oss;
      //return oss.
      std::string output = "Calling HtmlElement." + name + ".str()";
      return output;
   }
};

#define HTML_ELEMENT_H

#endif
