#include "Node.h"
#include <iostream>

Node::Node(Inventor val){
  data = val;
  next = nullptr;
}

Node::Node(){
  next= nullptr;
}