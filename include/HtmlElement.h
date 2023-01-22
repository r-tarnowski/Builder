//
// Created by tarnowski on 28.12.22.
//

#include <string>
#include <vector>
#include <sstream>

#ifndef HTML_ELEMENT_H

struct HtmlElement {
   std::string name;
   std::string text;
   std::vector<HtmlElement> elements;
   //std::ostringstream oss;

   HtmlElement() = default;
   HtmlElement( const std::string & name, const std::string & text)
                : name( name ), text( text ) {}

   std::string str( int indent = 0 ) const {
      //std::string output = "Calling HtmlElement." + name + ".str()";
      std::ostringstream oss;
      oss << "<" << name << ">";
      if ( text.length() ) {
         oss << text;
      }
      if ( ! elements.empty() ) {
         for ( auto element : elements ) {
            oss << element.str();
         }
      }
      oss << "</" << name << ">";
      //oss << output;
      return oss.str();
   }
};

#define HTML_ELEMENT_H

#endif
