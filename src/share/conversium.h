//
// C++ Interface: charconvhex
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//

//Jotain vanhaa vuodelta -91 ja sillee. hp

#ifndef CONVERSIUM_H
#define CONVERSIUM_H

#include <string>
#include <cmath>

char hexToAsc(unsigned char const  hLuku);   //Heksaluku asciimerkiksi
unsigned char ascToHex(char const  aMerkki);   //ascii merkki heksaluvuksi
int aschex (char a,char b);   //Kaksi acsii merkkiä yhdeksi heksaluvuksi
std::string hexToString(unsigned int hLuku, unsigned int palautusPituus);   //Heksaluku ascii merkkijonoksi
std::string decToString(unsigned int dLuku, unsigned int palautusPituus, char etumerkki);   //Dec luku merkkijonoksi
std::string binToString(unsigned int bLuku, unsigned int palautusPituus);   //Binääriluku merkkijonoksi

unsigned int binStringToUInt(std::string& strBinLuku);   //Binäärimerkkijon luvuksi
int hexStringToHex(std::string& strHexLuku);   //Heksamerkkijono luvuksi
int decStringToDec(std::string& strDecLuku);   //Desimaalimerkkijono luvuksi

bool isStringBin(std::string& strBinLuku);   //Tutkii onko merkkijono binääriluku
bool isStringDec(std::string& strDecLuku);   //Tutkii onko merkkijono desimaaliluku
bool isStringHex(std::string& strHexLuku);   //Tutkii onko merkkijono heksaluku

#endif
