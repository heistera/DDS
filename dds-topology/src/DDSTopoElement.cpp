// Copyright 2014 GSI, Inc. All rights reserved.
//
//
//

// DDS
#include "DDSTopoElement.h"
// STD
#include <iostream>

using namespace std;
using namespace boost::property_tree;

DDSTopoElement::DDSTopoElement() : DDSTopoBase()
{
    setType(DDSTopoType::TOPO_ELEMENT);
}

DDSTopoElement::~DDSTopoElement()
{
}
