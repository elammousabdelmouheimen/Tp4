#include "Encrypt.h"
#include <string>
Encrypt::Encrypt(std::string plain, std::string cipher) : _plain(plain), _cipher(cipher) {}
const std::string& Encrypt::getPlain() const {
	return _plain;
}
const std::string& Encrypt::getCipher() const {
	return _cipher;
}