#include <string>
#include <vector>
#include <sstream>
#include <memory>

#ifndef BETTER_HTML_ELEMENT_H
#define BETTER_HTML_ELEMENT_H

struct BetterHtmlBuilder;

struct BetterHtmlElement {
   std::string name;
   std::string text;
   std::vector<BetterHtmlElement> elements;
   //std::ostringstream oss;

 // static std::unique_ptr<BetterHtmlBuilder> build( const std::string & rootName ) {
 //    return make_unique<BetterHtmlBuilder>(rootName);
  //}

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

//protected:
   BetterHtmlElement() = default;
   BetterHtmlElement( const std::string & name, const std::string & text)
         : name( name ), text( text ) {}
};

#endif