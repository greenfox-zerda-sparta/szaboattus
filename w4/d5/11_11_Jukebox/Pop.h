/*
 * Pop.h
 *
 *  Created on: 2016 nov. 14
 *      Author: win7
 */

#ifndef POP_H_
#define POP_H_
#include <iostream>
#include <string>
#include "Song.h"

class Pop : public Song {
public:
  Pop(string artist, string title);
};

#endif /* POP_H_ */
