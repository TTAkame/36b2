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
  
 
    
    Time one{"8:00"};
    Time two{"10:00"};
    Time three{"11:00"};
    Time four{"12:00"};
    /* cout << (one.dump2json()).toStyledString() << endl; */
    /* cout << (two.dump2json()).toStyledString() << endl; */
    
    Person red{"Little Red"};
    Person mom{"Mom"};
    Person grandma{"Grandma"};
    Person wolf{"wolf"};
    
    Thing cap{"cap"};
    Thing wine{"wine"};
    Thing cake{"cake"};
    Thing oak{"oak"};

    Location iw{"a spot in the wood"};
    Location ow{"outside of the wood"};
    Location ot{"nearby three large oak trees"};
    Location hm{"home"};

    

    //Little Red Ridding Hood wore the Cap
    Record s1;
    s1.setPerson(red);
    s1.setThing(cap);
    s1.setLocation(hm);
    s1.setTime(one);
    
    //Her mom gave her the cake and wine
    Record s2;
    s2.setPerson(red,mom);
    s2.setThing(cake,wine);
    s2.setLocation(hm);
    s2.setTime(two);
    
    //Little Red met the wolf at a particular spot in the wood
    Record s3;
    s3.setPerson(red,wolf);
    s3.setLocation(iw);
    s3.setTime(three);
      
    //Grandma was at her own home right outside of the wood and there were three large oak trees nearby
    Record s4;
    s4.setPerson(grandma);
    s4.setLocation(ot);
    s4.setTime(four);

    // dump
    cout << (s1.dump2json()).toStyledString() << endl;
    cout << (s2.dump2json()).toStyledString() << endl;
    cout << (s3.dump2json()).toStyledString() << endl;
    cout << (s4.dump2json()).toStyledString() << endl;
}
