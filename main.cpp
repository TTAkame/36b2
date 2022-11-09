#include<iostream>

#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>


#include "tet.h"
using namespace std;

int main(){
  
 
    
 /*   Time one;
    Time two;
    Time three;
    Time four; */
    
    Person red{"Little Red"};
    Person mom{"Mom"};
    Person gra{"Grandma"};
    Person wol{"wolf"};
    
    Thing cap{"cap"};
    Thing wine{"wine"};
    Thing cake{"cake"};
    Thing oak{"oak"};

    Place iw{"a spot in the wood"};
    Place ow{"outside of the wood"};
    Place ot{"nearby three large oak trees"};
    Place hm{"home"};
    
    cout << (hm.dump2json()).toStyledString() << std::endl;
/*

  //Little Red Ridding Hood wore the Cap
  Record s1;
  
  //Her mom gave her the cake and wine
  Record s2;
  
  //Little Red met the wolf at a particular spot in the wood
  Record s3;
    
  //Grandma was at her own home right outside of the wood and there were three large oak trees nearby
  Record s4;
    
*/
    return 0;
}

//std::cout << (m.dump2json()).toStyledString() << std::endl;
